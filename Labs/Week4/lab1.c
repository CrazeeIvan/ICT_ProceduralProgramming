// Write a program that takes input from a user in the form of annual salary.
// Output the monthly rate.


#include <stdio.h>

int main()
{
  float annual_salary;

  printf("Please input your Annual Salary: ");
  scanf("%f", &annual_salary);

  printf("Your annual salary is: %f\n", annual_salary);
  printf("Your monthly salary is: %.2f\n", annual_salary / 12);

  return 0;
}
