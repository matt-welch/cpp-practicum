/**
 * @brief Custom Exceptions for Memory Operations
 *
 * @par
 * Copyright Jeremy Wright (c) 2011
 * Creative Commons Attribution-ShareAlike 3.0 Unported License.
 */
#ifndef _MEMORYEXCEPTION
#define _MEMORYEXCEPTION
#include <stdexcept>
#include <exception>
#include <stdint.h>

namespace K1 {
    namespace MemoryException 
    {
        /**
         * Exception for illegal accesses to unitialised memory 
         */
        class UninitializedMemoryException : public std::logic_error
        {
            public:
                UninitializedMemoryException():
                    logic_error("Illegal attempt to access unitialized memory."){}
        };

        class UnalignedAddressException : public std::logic_error
        {
            public:
                UnalignedAddressException(uint32_t BadAddr):
                    logic_error("Illegal address."),
                    address(BadAddr)
            {}
                uint32_t address;


        };
    }
}
#endif /* end of include guard: _MEMORYEXCEPTION */


