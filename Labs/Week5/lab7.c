// Write a program that prompts a sales person to input monthly sales figures for
// the year, stores the results in an array and outputs the formatted figures and
// useful text, as well as total and average monthly. Can you use an enum to help?
// What about a case statement?
#include <stdio.h>

int main()
{
  int i, j;
  long long int total=0;
  const char* months[] = {
    "January", "February", "March", "April",
    "May", "June", "July", "August",
    "September", "October", "November", "December"
  };
  int monthlySales[12];
  for(i = 0; i<=11;i++)
  {
    printf("Please enter %s sales figures: ", months[i]);
    scanf("%d", &monthlySales[i]);
  }
  printf("Sales for this year were:\n");
  for (i=0;i<=11;i++)
  {
    printf("%s : %d\n", months[i], monthlySales[i]);
    total+=monthlySales[i];
  }
  printf("Total sales for this year were: %d.\n", total);
  printf("Average monthly sales for this year were: %d.\n", total/12);
}
