// Write a program that prompts a user to enter an integer in each element of a
// five-element array. Loop through the contents and display the element number
// and its corresponding value. Call a custom function to double the value in
// each element. Print the number and value after doubling.

#include <stdio.h>

int main ()
{
  int numArray[5];
  int i=0, j=0;
  for (i;i<5;i++)
  {
    printf("\nPlease enter your %d number:", i+1);
    scanf("%d", &numArray[i]);
  }
  for (i=0;i<5;i++)
  {
    printf("\nElement %d is %d.", i+1, numArray[i]);
    printf("\nDouble of %d is %d.", numArray[i], doubleThis(numArray[i]));
  }
}
int doubleThis(int i)
{
  int j;
  j=i*2;
  return j;
}
