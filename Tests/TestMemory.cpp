#include "TestMemory.h"


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

