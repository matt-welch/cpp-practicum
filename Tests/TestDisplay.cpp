#include <gtest/gtest.h>
#include "Display.hpp"
#include "Device.hpp"


#include <sstream>
#include <iostream>
#include <tr1/memory>
using namespace std;
TEST(TestDisplay, Test1)
{
    char const WriteThis = 'g';


    stringstream ss;
    Device* d = new Display(ss);
    d->PutChar(WriteThis);
    
    EXPECT_EQ(ss.str()[0], WriteThis);
    
    
}
