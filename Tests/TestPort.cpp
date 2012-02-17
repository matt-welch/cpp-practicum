#include "TestPort.h"
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

TEST_F(PortTest, SendInt)
{
    systemBus << 1;
    BusWidth_t output;
    systemBus >> output;
    EXPECT_EQ(1, output);
}

TEST_F(PortTest, SendManyInt)
{
    //STUB: Student shall implement this
    EXPECT_TRUE(false);
}

