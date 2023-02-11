#include <calculator.h>
#include <gtest/gtest.h>

TEST(GTestExample, addTest)
{
    const int a = 79;
    const int b = 47;
    const int result = CalculatorNamespece::add(a, b);
    EXPECT_EQ(result, a + b);
}

TEST(GtestExample, subTest)
{
    const int a = 43;
    const int b = 89;
    const int result = CalculatorNamespece::sub(a, b);
    EXPECT_EQ(result, a - b);
}

TEST(GTestExample, multiTest)
{
    const int a = 35;
    const int b = 24;
    const int result = CalculatorNamespece::multi(a, b);
    EXPECT_EQ(result, a * b);
}

TEST(GtestExample, divTest)
{
    const int a = 45;
    const int b = 58;
    const float result = CalculatorNamespece::div(a, b);
    EXPECT_EQ(result, (float)a / (float)b);
}

TEST(GtestExample, divNegTest)
{
    const int a = 45;
    const int b = 0;
    const float result = CalculatorNamespece::div(a, b);
    std::cout << "result = " << result << std::endl;
    EXPECT_EQ(result, CalculatorNamespece::MyResult::ERROR);
}
