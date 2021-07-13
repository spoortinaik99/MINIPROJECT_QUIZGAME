#include "unity.h"
#include <fun.h>

/* Modify these two lines according to the project */
#include <fun.h>
#define PROJECT_NAME    "Quiz"

/* Prototypes for all the test functions */
void show_record();
void game();
void reset_score();
void help();

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_show_record);
  RUN_TEST(test_game);
  RUN_TEST(test_reset_score);
  RUN_TEST(test_help);
  
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_show_record(void) {
 
}

void test_game(void) {
 
}
void test_reset_score(void) {
 
}
void test_help(void) {
 
}