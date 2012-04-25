/**
 * @brief Test Fixture for SystemController Tests.
 *
 * @par
 * Copyright Matt Welch (c) 2011
 * Creative Commons Attribution-ShareAlike 3.0 Unported License.
 */
#ifndef __TESTSYSTEMCONTROLLER_H__
#define __TESTSYSTEMCONTROLLER_H__

#include <gtest/gtest.h>
#include <stdint.h>
#include <limits.h>
#include <cstdlib>
#include <time.h>
#include "SystemController.hpp"
//#include "IMemory.h"
//#include "Ram.h"

class SystemControllerTest: public ::testing::Test {
    protected:
        virtual void SetUp()
        {
            //Configure SystemController
        	masterControl = new SystemController(std::cout, std::cin);
            //mainMemory = new Ram(); // for reference
        }

        virtual void TearDown()
        {
        	delete masterControl;
        }

        SystemController * masterControl;
        //IMemory* mainMemory; // for reference
};


#endif /* end of include guard: __TESTSYSTEMCONTROLLER_H__ */
