// Open “utils.h” and add functions to accept a single integer argument and use
// it to calculate the area and circumference of a circle. Write a program that
// prompts user to input an integer, calls the functions in the included file
// to calculate the results and outputs the information to the screen.

#include <stdio.h>
#define PI 3.14159

int calculateArea(int radius)
{
  float area = PI*radius*radius;
  printf("\nThe area of a circle with radius %d, is %f.", radius, area);
}
int calculateCircumference(int radius)
{
  float circumference = 2*radius*PI;
  printf("\nThe circumference of a circle with radius %d, is %f.", radius, circumference);
}
