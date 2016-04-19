// Write a program that presents user with a menu of two options and Exit. User
// may choose to raise a number to a specific power, or to find the square root
// of a number. Depending on their selection, the program will prompt for input
// of a single number, or two numbers, or the program will terminate. The numbers
// provided by the user needn’t be integers. Output the result to the screen.


#include <stdio.h>
#include <math.h>

void menu();
void raiseN();
void squareRoot();

int main ()
{
  int option;
  while(option!=3)
  {
    menu();
    scanf("%1d", &option);
    if (option == 1)
    {
      raiseN();
    }
    else if (option == 2)
    {
      squareRoot();
    }
  }
  return 0;
}


void menu()
{
  printf("\n\t1. Raise n to the power of y.");
  printf("\n\t2. Find the square root of n.");
  printf("\n\t3. Exit.");
  printf("\n\n\tPlease select an option(1-3): ");
}


int power(int base,int exp)
{
    if ( exp!=1 )
        return (base*power(base,exp-1));
}


void raiseN()
{
  int base, exp;
  printf("Enter base number: ");
  scanf("%d",&base);
  printf("Enter power number(positive integer): ");
  scanf("%d",&exp);
  printf("%d^%d = %d", base, exp, power(base, exp));
}


void squareRoot()
{
  float input, result;
  printf("Please enter the number you would like to find the square root of: ");
  scanf("%f", &input);
  result = sqrt(input);
  printf("The square root of %lf is %lf\n", input, sqrt(input) );
}
