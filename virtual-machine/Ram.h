/**
 * @brief Volatile backend for the IMemory interface
 *
 * @par
 * Copyright Matt Welch (c) 2011
 * Creative Commons Attribution-ShareAlike 3.0 Unported License.
 */
#ifndef _RAM
#define _RAM
#include "IMemory.h"
#include <map>
using std::map;

namespace K1 {
    class Ram : public IMemory {
        public:
            Ram(){}
            virtual ~Ram(){}
            virtual uint32_t GetWord(uint32_t address) const;
            virtual uint8_t GetByte(uint32_t address) const;
            virtual void PutWord(uint32_t address, uint32_t datum);
            virtual void PutByte(uint32_t address, uint8_t datum);
        private:
            virtual uint32_t GetWordAlignedAddress(uint32_t address) const;
            virtual bool IsWordAlignedAddress(uint32_t address) const;
            map<uint32_t, uint32_t> dataStore;
    };
}


#endif /* end of include guard: _RAM */
