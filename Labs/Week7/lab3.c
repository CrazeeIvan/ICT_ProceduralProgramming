// Write a program that demonstrates the difference between use of fgets()
// and scanf().

#include <stdio.h>
#include <string.h>

int main ()
{
  char str[51];
  printf("\nEnter upto 50 characters with spaces\n");
  fgets(str, sizeof(str), stdin);
  printf("fgets() read:");
  puts(str);
  printf("\nEnter upto 50 characters with spaces\n");
  scanf("%s",str);
  printf("scanf() read:%s\n",str);
  return 0;
}
