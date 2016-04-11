// 1. Create an enumeration to hold days of the week.
// 2. Create an enumeration to hold months of the year, where the integer value
// stored is the number of days in the year. How do you handle leap years?
// 3. Using pseudocode, create a short program to take input from a user who wants
// to know the closing time of a shop on different days.
// 4. Using pseudocode, create a short program to allow a user to select a
// difficulty level for a game and echo their choice to the screen.


#include <stdio.h>

int main()
{
  enum weekdays {
    Monday=1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
  };

  enum {
    January=31, February=28, March=31, April=30, May=31, June=30, July=31,
    August=31, September=30, October=31, November=30, December=31
  };

  printf("January has %d days.\n", January);
  printf("February has %d days.\n", February);
  printf("March has %d days.\n", March);
  printf("April has %d days.\n", April);
  printf("May has %d days.\n", May);
  printf("June has %d days.\n", June);
  printf("July has %d days.\n", July);
  printf("August has %d days.\n", August);
  printf("September has %d days.\n", September);
  printf("October has %d days.\n", October);
  printf("November has %d days.\n", November);
  printf("December has %d days.\n", December);
  // printf("%d\n", Sunday);
  return 0;
}
