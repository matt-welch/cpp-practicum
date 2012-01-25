#include "Ram.h"

using namespace K1::MemoryException;

uint8_t K1::Ram::GetByte(uint32_t address) const
{
    try
    {
        uint32_t datum = GetWord(GetWordAlignedAddress(address));
        uint8_t byteAddress = address & 0x3;
        return (0xFF & (datum >> (byteAddress * 8)));
    } catch(std::exception&)
    {
        throw UninitializedMemoryException();
    }

}

void K1::Ram::PutByte(uint32_t address, uint8_t datum)
{
    uint32_t oldData = 0;
    uint32_t wordAddress = GetWordAlignedAddress(address);
    if(dataStore.find(wordAddress) != dataStore.end())
        oldData = GetWord(wordAddress);

    uint8_t byteAddress = address & 0x3;
    /* erase the data from the old byte, that is int the byte address'
     * position
     */
    uint32_t newData = oldData & ~(0xFF << (byteAddress*8));
    newData = newData | datum << (byteAddress*8);
    PutWord(wordAddress, newData);
}

uint32_t K1::Ram::GetWordAlignedAddress(uint32_t address) const
{
    return address & ~0x3;
}

bool K1::Ram::IsWordAlignedAddress(uint32_t address) const
{
    return (GetWordAlignedAddress(address) == address) ? true : false;
}

/***** Left as an excercise to the student *****/
/* const function guaranteed to not modify the class state*/
uint32_t K1::Ram::GetWord(uint32_t address) const
{
    // verify that the address specified is valid
	if(dataStore.find(address) != dataStore.end())
		return (dataStore.at(address));
	else
		throw UninitializedMemoryException();
}

void K1::Ram::PutWord(uint32_t address, uint32_t datum)
{

    // verify that the address specified is valid (the map has expanded to allow the address)
	if(dataStore.find(address) != dataStore.end())
		dataStore[address] = datum;
    else// insert at specified address instead
    	dataStore.insert(std::pair<uint32_t, uint32_t>(address, datum));
}
