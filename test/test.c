#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

#include "strcal.h"

static void null_should_return_0(void **state)
{
  signed int actual = add(NULL);

  assert_int_equal(actual, 0);
}

static void empty_string_should_return_0(void **state)
{
  signed int actual = add("");

  assert_int_equal(actual, 0);
}

static void one_number_should_return_the_number(void **state)
{
  signed int actual = add("23");

  assert_int_equal(actual, 23);
}

static void two_numbers_should_return_the_sum(void **state)
{
  signed int actual = add("23,11");

  assert_int_equal(actual, 34);
}

int main(void)
{
  const struct CMUnitTest tests[] = {
      cmocka_unit_test(null_should_return_0),
      cmocka_unit_test(empty_string_should_return_0),
      cmocka_unit_test(one_number_should_return_the_number),
      //cmocka_unit_test(two_numbers_should_return_the_sum),
  };
  return cmocka_run_group_tests(tests, NULL, NULL);
}
