#include "gtest/gtest.h"
#include "../lib.cpp"

TEST(CalculatorTests, Add) {
	EXPECT_EQ(calc::op_add(2, 3), 5);
	EXPECT_EQ(calc::op_add(-1, 1), 0);
}

TEST(CalculatorTests, Subtract) {
	EXPECT_EQ(calc::op_sub(5, 3), 2);
	EXPECT_EQ(calc::op_sub(-1, -1), 0);
}

TEST(CalculatorTests, Multiply) {
	EXPECT_EQ(calc::op_mul(4, 3), 12);
	EXPECT_EQ(calc::op_mul(-2, 2), -4);
}

TEST(CalculatorTests, Divide) {
	EXPECT_EQ(calc::op_div(6, 3), 2);
	EXPECT_EQ(calc::op_div(5, 0), 0); // проверка деления на ноль
}