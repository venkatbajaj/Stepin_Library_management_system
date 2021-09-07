#include "unity.h"
#include "fun.h"
#define PROJECT_NAME "LibraryManagement"

void test_display(void);
void test_addbook(void);
void test_search(void);
void test_stock(void);

void setUp()
{
}
void tearDown()
{
}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_addbook);
  RUN_TEST(test_display);
  RUN_TEST(test_search);
  RUN_TEST(test_stock);

   return UNITY_END();
}

void test_addbook(void)
{
  TEST_ASSERT_EQUAL(Found,addbook("Books.txt"));
}
void test_display(void)
{
  TEST_ASSERT_EQUAL(Found,display("Books.txt"));
}
void test_search(void)
{
  TEST_ASSERT_EQUAL(Found,search("Books.txt"));
}
void test_stock(void)
{
  TEST_ASSERT_EQUAL(Found,stock("Books.txt"));
}
