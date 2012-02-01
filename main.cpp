/**
 * @brief Project 1 to test the project pipeline.
 *
 * @par
 * Copyright Matt Welch (c) 2012
 * Creative Commons Attribution-ShareAlike 3.0 Unported License.
 */

#include <iostream>
#include <stdint.h>
#include <string.h>
#include "virtual-machine/Fletcher16.h"

using std::cout;
using std::endl;

char const * MyName = "Matt Welch";

int main(int argc, const char *argv[])
{
    cout << MyName << ": " << Fletcher16((uint8_t const *)MyName, strlen(MyName)) << endl;    
    return 0;
}
