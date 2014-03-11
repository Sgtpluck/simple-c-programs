/* your weight in rhodium */

#include <stdio.h>
int main(void)
{
  float weight, value;

  printf("Are you worth your weight in rhodium?\n");
  printf("Let's check it ouuuuuut\n");
  printf("Please enter your weight in pounds:  ");

  /* get input from the user */
  scanf("%f", &weight);
  /* assume rhodium is $770 per ounce */
  /* 14.5833 converts pounds avd. to ounces troy */
  value = 770.0 * weight * 14.5833;
  printf("Your value in rhodium is worth $%.2f\n", value);
  printf("You are easily worth that! If the cost of rhodium goes down,\n");
  printf("eat more to maintain your value!\n");

  return 0;
}
