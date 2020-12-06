#include "unity.h"
#include "sdlc.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_squareroot(void)
{
  TEST_ASSERT_EQUAL(5, squareroot(25));
  TEST_ASSERT_EQUAL(10, squareroot(100));
}
void test_reciprocal(void)
{
  TEST_ASSERT_EQUAL(0.1000, reciprocal(10));
  TEST_ASSERT_EQUAL(0.04, reciprocal(25));
}

void test_power(void)
{
  TEST_ASSERT_EQUAL(8, power(2, 3));
  TEST_ASSERT_EQUAL(100, power(10, 2));
}
void test_exponential(void)
{
  TEST_ASSERT_EQUAL(7.3890, exponential(2));
  TEST_ASSERT_EQUAL(2980.9579, exponential(8));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_squareroot);
  RUN_TEST(test_reciprocal);
  RUN_TEST(test_power);
  RUN_TEST(test_exponential);
  /* Close the Unity Test Framework */
  return UNITY_END();
}

