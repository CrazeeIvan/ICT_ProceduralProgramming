// Write a program that prompts user to input two numbers, the first to be
// divided by the second. (For the moment, assume user will use non-zero
// integers.) Output the result as an accurate floating-point number. Think about
//  data-types!

#include <stdio.h>

int main()
{
  int num1, num2;
  float answer;

  printf("Please enter two (non-zero) integers that you wish to divide!\n");
  scanf("%d %d", &num1, &num2);
  answer = (float)num1/(float)num2;
  printf("%d divided by %d is: %.5f", num1, num2, answer);
  return 0;
}
