#include "Fletcher16.h"

uint16_t Fletcher16(uint8_t const* data, size_t length)
{
   uint16_t sum1 = 0;
   uint16_t sum2 = 0;
   size_t index;
 
   for( index = 0; index < length; ++index )
   {
      sum1 = (sum1 + data[index]) % 255;
      sum2 = (sum2 + sum1) % 255;
   }
 
   return (sum2 << 8) | sum1;
}

