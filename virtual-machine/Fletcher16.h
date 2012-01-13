/**
 * @brief Simple Fletcher16 Checksum Library
 *
 * @par
 * Copyright Jeremy Wright (c) 2011
 * Creative Commons Attribution-ShareAlike 3.0 Unported License.
 */

#ifndef _FLETCHER16
#define _FLETCHER16

#include <cstring>
#include <stdint.h>
uint16_t Fletcher16(uint8_t const* data, size_t length);


#endif /* end of include guard: _FLETCHER16 */
