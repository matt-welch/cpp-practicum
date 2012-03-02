#include <gtest/gtest.h>
#include "RegFile.h"
#include "TestPort.h"
using namespace K1;

TEST_F(PortTest, WriteValueToRegister)
{
	const uint32_t data = 12345;
	systemRegisters.PutRegister(K1::RegFile::A, data);
	uint32_t output = systemRegisters.GetRegister(K1::RegFile::A);

	EXPECT_EQ(data, output);
}

TEST_F(PortTest, ReadValueToRegister)
{
	const uint32_t data = 12345;
	systemRegisters.PutRegister(K1::RegFile::A, data);
	uint32_t output = systemRegisters.GetRegister(K1::RegFile::A);

	EXPECT_EQ(data, output);
}
