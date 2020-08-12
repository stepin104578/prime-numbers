#include "unity.h"
#include "primenum.h"
#include <stdbool.h>
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_primenum(void)
{
  TEST_ASSERT_EQUAL(1, primenum(5));
  TEST_ASSERT_EQUAL(1, primenum(97));
}

void test_nonprimenum(void)
{
  TEST_ASSERT_EQUAL(0, primenum(8));
  TEST_ASSERT_EQUAL(0, primenum(69));
}

void test_negative(void)
{
  TEST_ASSERT_EQUAL(-1, primenum(-5));
  TEST_ASSERT_EQUAL(-1, primenum(-10));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_primenum);
  RUN_TEST(test_negative);
  RUN_TEST(test_nonprimenum);
  /* Close the Unity Test Framework */
  return UNITY_END();
}

