#include <gtest/gtest.h>
#include "Fletcher16.h"

TEST(NaiveTest, DoesNothing)
{
    EXPECT_EQ(1,1);
}

TEST(Fletcher16, SimpleVerify)
{
    char const * MyName = "Jeremy Wright";
    EXPECT_EQ(22022, Fletcher16((uint8_t const *)MyName, strlen(MyName)));
}
