// Write a program that prompts a user to input their date of birth. Calculate
// their age and ouput a message in the form: “You are n years old.”

#include <stdio.h>
#include <time.h>

int main ()
{
  int date, month, year;
  double seconds;
  time_t now;
  time(&now);
  struct tm birthday;
  birthday = *localtime(&now);
  printf("Please enter your date of birth (dd/mm/yyyy).\n");
  scanf("%d/%d/%d", &date, &month, &year);
  birthday.tm_mon = month-1;
  birthday.tm_mday = date;
  birthday.tm_year = year-1900;
  seconds = difftime(now, mktime(&birthday));
  printf("You are %f years old!\n", seconds/60/60/24/365);
}
