#include "TestPort.h"
#include <deque>
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
	systemBus << 1 << 2 << 3;

    //STUB: Student shall implement this
	BusWidth_t first, second, third;
	systemBus >> first;
	systemBus >> second;
	systemBus >> third;
    EXPECT_EQ(1, first);
    EXPECT_EQ(2, second);
    EXPECT_EQ(3, third);
}

