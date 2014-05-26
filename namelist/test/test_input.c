#include "unity.h"
#include "input.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void xtest_getAge_should_receive_23() {
	TEST_ASSERT_EQUAL(23, getAge());
}

void xtest_getName_should_receive_Ali() {
	TEST_ASSERT_EQUAL_STRING("Ali", getName());
}

void test_id_should_receive_00888(){

  TEST_ASSERT_EQUAL_STRING(00888, getID() );
  
  }
  
void test_city_city_should_receive_Newyork(){
    TEST_ASSERT_EQUAL_STRING("Newyork", getPlace());
 }