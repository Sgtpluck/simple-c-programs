#include <stdio.h>

/* print Celsius-Fahrenheit table F = 9C/5 + 32
  for fahr= 0, 20, ..., 300 */

main()
{
  printf("Celsius-Fahrenheit Table\n");
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;
  while (celsius <= upper) {
    fahr = (9.0/5.0 * celsius) + 32;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}

