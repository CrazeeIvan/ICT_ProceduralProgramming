// Open “utils.h” and add functions to accept a single integer argument and use
// it to calculate the area and circumference of a circle. Write a program that
// prompts user to input an integer, calls the functions in the included file
// to calculate the results and outputs the information to the screen.

#include <stdio.h>
#include "util.h"

int main ()
{
  int i=0, radius;
  printf("Please enter the radius of your circle: ", i);
  scanf("%d", &radius);
  calculateArea(radius);
  calculateCircumference(radius);
}
