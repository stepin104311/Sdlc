#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <sdlc.h>
#define PROJECT_NAME    "Sdlc"

/* Prototypes for all the test functions */
void test_squareroot(void);
void test_reciprocal(void);
void test_power(void);
void test_exponential(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "squareroot", test_squareroot);
  CU_add_test(suite, "reciprocal", test_reciprocal);
  CU_add_test(suite, "power", test_power);
  CU_add_test(suite, "exponential", test_exponential);

/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 

void test_squareroot(void) {
  CU_ASSERT(10 == squareroot(100));
  
  /* Dummy fail*/
  CU_ASSERT(3 == squareroot(25));
}


void test_inverse(void) {
  CU_ASSERT(0.1== reciprocal(10));
  
  /* Dummy fail*/
  CU_ASSERT(2==reciprocal(3));
}


void test_power(void) {
  CU_ASSERT(100 == power(10, 2));
  
  /* Dummy fail*/
  CU_ASSERT(6 == power(3, 3));
}


void test_exponential(void) {
  CU_ASSERT(7.3890== exponential(2));
  
  /* Dummy fail*/
  CU_ASSERT(100==exponential(3));
}

