#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

#include "strcal.h"

static void empty_string_should_return_0(void **state)
{
  (void) state;
}

int main(void)
{
  const struct CMUnitTest tests[] = {
      cmocka_unit_test(empty_string_should_return_0),
  };
  return cmocka_run_group_tests(tests, NULL, NULL);
}