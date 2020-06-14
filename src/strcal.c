#include <string.h>
#include <stdlib.h>

#include "strcal.h"

signed int add(const char *numbers)
{
  if (numbers == NULL || strlen(numbers) == 0) {
    return 0;
  }

  return strtol(numbers, NULL, 10);
}