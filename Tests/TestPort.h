/**
 * @brief Test Fixture for the Port Tests
 *
 * @par
 * Copyright Jeremy Wright (c) 2011
 * Creative Commons Attribution-ShareAlike 3.0 Unported License.
 */
#ifndef _TESTPORT
#define _TESTPORT

#include <gtest/gtest.h>
#include "IPort.h"
#include "InMemoryPort.h"
#include <stdint.h>

class PortTest : public ::testing::Test {
    public:
        typedef uint32_t BusWidth_t;
    protected:
        virtual void SetUp()
        {
        }

        virtual void TearDown()
        {
        }

        K1::IPort<BusWidth_t, K1::InMemoryPortHandler<BusWidth_t> > systemBus;
};

#endif /* end of include guard: _TESTPORT */
