// Create a string array of several elements, each element containing a fortune-
// cookie sentiment. Prompt user for input and print out appropriate “fortune”

#include <stdio.h>

int main()
{
  int num1;
  char *fortunes[] = {"The early bird gets the worm, but the second mouse gets the cheese.",
      "It's amazing how much good you can do if you don't care who gets the credit.",
      "All things are difficult before they are easy."
   };
  printf("Please enter an integer (between 0-2) to get your fortune for today!\n");
  scanf("%d", &num1);
  printf("Your fortune is:\n %s", fortunes[num1]);

  return 0;
}
