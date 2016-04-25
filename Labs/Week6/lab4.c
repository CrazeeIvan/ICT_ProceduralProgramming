// Write a program to convert input from Imperial to metric. Provide function
// celsius() to convert degrees Fahrenheit to degrees Celsius. (The conversion
// formula is °C = 5/9 * (°F - 32).) Provide function kilos() to convert weight
// from pounds to kilos. (1Kg = 2.2 lbs) Can you use recursive calls to prevent
// user providing data that could crash the program or result in spurious output?


#include <stdio.h>
#include <math.h>
#define POUNDS 2.2046

void menu();
void celsius();
void kilos();

int main ()
{
  int option;
  while(option!=3)
  {
    menu();
    scanf("%1d", &option);
    if (option == 1)
    {
      celsius();
    }
    else if (option == 2)
    {
      kilos();
    }
    else if (option != 3)
    {
      printf("\nInvalid selection. Please just a value between 1-3");
    }
  }
  return 0;
}


void menu()
{
  printf("\n\tWelcome to Ciaran's Amazing de-Imperializer!");
  printf("\n\t1. Convert Fahrenheit degrees to Celsius degrees.");
  printf("\n\t2. Convert Pounds to Kilos.");
  printf("\n\t3. Exit.");
  printf("\n\n\tPlease select an option(1-3): ");
}


void celsius()
{
  long signed int input;
  printf("\nEnter a temperature in degrees Fahrenheit to convert to Celsius degrees: ");
  scanf("%d", &input);
  printf("\n%d degrees Fahrenheit is %d degrees Celsius.\n", input, 5 * (input-32)/9);

}


void kilos()
{
  long signed int input, result;
  printf("\nEnter a weight in pounds to convert to kilos: ");
  scanf("%d", &input);
  result = input / POUNDS;
  printf("\n%d pounds is %ld kilos.\n", input, result);
}
