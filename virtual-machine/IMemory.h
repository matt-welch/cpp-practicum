/**
 * @brief Memory Interface, describes the general interface to memory
 * independent of storage backend
 *
 * @par
 * Copyright Matt Welch (c) 2011
 * Creative Commons Attribution-ShareAlike 3.0 Unported License.
 */
#ifndef _IMEMORY
#define _IMEMORY

#include <stdint.h>
#include "MemoryException.h"
namespace K1 {
   
    class IMemory {
        public:
            /** Read a word from the Memory Store */
            virtual uint32_t GetWord(uint32_t address) const = 0;
            
            /** Read a byte from the Memory Store */
            virtual uint8_t GetByte(uint32_t address) const = 0;

            /** Write a word to the Memory Store */
            virtual void PutWord(uint32_t address, uint32_t datum) = 0;

            /** Write a byte to the Memory Store */
            virtual void PutByte(uint32_t address, uint8_t datum) = 0;
    };
}


#endif /* end of include guard: _IMEMORY */
