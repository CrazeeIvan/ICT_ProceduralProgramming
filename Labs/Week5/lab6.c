// Write a program that prompts the user to provide a start (lower) value and an
// end (upper) value. Add all the number and output result to screen.

#include <stdio.h>

int main()
{
  int firstNum, secondNum, i, j;
  long long int answer=0;
  printf("Please enter your start (lower) number: ");
  scanf("%d", &firstNum);
  printf("Please enter your end (upper) number: ");
  scanf("%d", &secondNum);
  i = firstNum;
  printf("%d to %d contains the even numbers:\n", firstNum, secondNum);
  for (i = firstNum;i<=secondNum;i++)
  {
    printf("%d ", (i%2==0) ? i:0);
    answer+= (i%2==0) ? i:0;
  }
  printf("\nThe total is: %d.\n", answer);

}
