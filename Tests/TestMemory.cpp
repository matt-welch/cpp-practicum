#include "TestMemory.h"
#include <omp.h>
#define	NUM_THREADS	4

TEST_F(MemoryTest, ReadUnitializedMemory)
{
    for(uint32_t addr = 0; addr < 1024; addr+=4)
    {
        ASSERT_THROW(mainMemory->GetWord(addr), MemoryException::UninitializedMemoryException);
    }
}

TEST_F(MemoryTest, ReadWriteByte)
{
    for(uint32_t addr = 0; addr < 1024; ++addr)
    {
        for(uint8_t datum = 0; datum < UINT8_MAX; ++datum)
        {
            mainMemory->PutByte(addr, datum);
            ASSERT_EQ(datum,mainMemory->GetByte(addr));
        }
    }
}

#ifdef PARALLEL
TEST_F(MemoryTest, ReadWriteByteParallel)
{
#pragma omp parallel num_threads(NUM_THREADS)
	{
		int id = omp_get_thread_num();
		uint32_t init_addr = 256*id;
		uint32_t fin_addr  = 256*(id+1)-1;
		for(uint32_t addr = init_addr; addr < fin_addr; ++addr)
		{
			for(uint8_t datum = 0; datum < UINT8_MAX; ++datum)
			{
				mainMemory->PutByte(addr, datum);
				ASSERT_EQ(datum,mainMemory->GetByte(addr));
			}
		}
	} //end parallel section
}
#endif

TEST_F(MemoryTest, WordAlignedMemory)
{
	// write to a bit of memory that is not word-aligned
}

TEST_F(MemoryTest, ReadWriteWord)
{
	// test bottom end of memory
	for(uint32_t addr = 0; addr < 1024; addr += 4)
	{
		for(uint32_t datum = 0; datum < UINT32_MAX; datum = (datum << 1) | 1)
		{
			mainMemory->PutWord(addr, datum);
			ASSERT_EQ(datum,mainMemory->GetWord(addr));
		}
	}

	// test top end of memory
	for(uint32_t addr = UINT32_MAX; addr > (UINT32_MAX-1024); addr -= 4)
	{
		for(uint32_t datum = 0; datum < UINT32_MAX; datum = (datum << 1) | 1)
		{
			mainMemory->PutWord(addr, datum);
			ASSERT_EQ(datum,mainMemory->GetWord(addr));
		}
	}

}

TEST_F(MemoryTest, PutBytesGetWordsEC)
{
	// seed rand with the time
	srand( time(NULL));
	uint8_t array[4];

	// put 4 bytes into consecutive memory locations
	for(uint32_t addr = 0; addr < 1024; addr += 4)
	{
		// generate 4 random uint8 and put them in memory
		for(int i = 0; i < 4; ++i)
		{
			array[i] = rand() % 256;
			mainMemory->PutByte((addr+i), array[i]);
		}

		// shift bytes and bitwise OR bytes together into a word
		uint32_t datum = array[0] | (array[1] << 8) | (array[2] << 16)  | (array[3] << 24);

		// get memory word (composed of 4 PutBytes)
		// make sure that the memory retrieved is the same as the concatenated bytes
		ASSERT_EQ(datum,mainMemory->GetWord(addr));
	}
}
