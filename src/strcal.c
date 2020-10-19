#include <string.h>
#include <stdlib.h>

#include "strcal.h"

signed int add(const char *numbers)
{
  if (numbers == NULL || strlen(numbers) == 0)
  {
    return 0;
  }

  char *first_comma = strchr(numbers, ',');
  if (first_comma == NULL)
  {
    return strtol(numbers, NULL, 10);
  }

  const size_t first_part_size = first_comma - numbers + 1;
  char* first_part = malloc(first_part_size);
}