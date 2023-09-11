// Function to shift an unsigned int left if
// the count is positive, and right if the count is negative

#include <stdio.h>

// Declare Functions
unsigned int shift (unsigned int, int);

int main(void) {

  unsigned int input;
  printf ("Enter digit to shift:  ");
  scanf ("%u", &input);

  int displacement;
  printf ("Enter displacement:  ");
  scanf ("%d", &displacement);

  unsigned int output;
  output = shift (input, displacement);
  printf ("Shift: %#.8b    ", input);
  printf ("By:  %d\n", displacement);
  printf ("Is:    %#.8b\n", output);

  return 0;
}

// Define Functions
unsigned int shift (unsigned int value, int n) {
  printf ("Value before Shift:    %u\n", value);
  if (n > 0)
    value <<= n;
  else
    value >>= -n;
  printf ("Value after Shift:    %u\n", value);

  return value;
}