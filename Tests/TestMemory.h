/**
 * @brief Test Fixture for Memory Tests.
 *
 * @par
 * Copyright Matt Welch (c) 2011
 * Creative Commons Attribution-ShareAlike 3.0 Unported License.
 */
#ifndef _TESTMEMORY
#define _TESTMEMORY

#include <gtest/gtest.h>
#include <stdint.h>
#include <limits.h>
#include <cstdlib>
#include <time.h>
#include "IMemory.h"
#include "Ram.h"

using namespace K1;

class MemoryTest: public ::testing::Test {
    protected:
        virtual void SetUp()
        {
            /* Configure mainMemory to use the RAM backend */
            mainMemory = new Ram();

        }

        virtual void TearDown()
        {
            delete mainMemory;
        }

        IMemory* mainMemory;
};


#endif /* end of include guard: _TESTMEMORY */
