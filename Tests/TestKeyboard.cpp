/*
 * TestKeyboard.cpp
 *
 *  Created on: Mar 15, 2012
 *      Author: mwelch
 */

#include <gtest/gtest.h>
#include "Keyboard.hpp"
#include "Device.hpp"

#include <sstream>
#include <iostream>

using namespace std;
TEST(KeyboardTest, Test1)
{
    char const ReadThis = 'g';

    stringstream ss;
    ss << ReadThis;

    Device * kb(new Keyboard(ss));

    char outPut = kb->GetChar();

    EXPECT_EQ(outPut, ReadThis);
}
