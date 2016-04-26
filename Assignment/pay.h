#include <stdio.h>
typedef struct
{
    int number;
    char text[10];
    double real_number;
} example;


void payMenu()
{
  printf("\n\t\t##Pay Rate Menu##\n");
  printf("\n\t\t1. Add Pay rates");
  printf("\n\t\t2. Show Pay rates");
  printf("\n\t\t3. Update Pay rates");
  printf("\n\t\t4. Delete Pay rates");
  printf("\n\t\t5. Back\n");
}

int testStruct()
{
  example data = {1, "Hello!", 3.14159265}, read_data;
  printf("%d\n%s\n%lf\n", data.number, data.text, data.real_number);
  FILE* fout = fopen("blah.txt", "w");
  fwrite(&data, sizeof(example), 1, fout);
  fclose(fout);
  FILE* fin = fopen("blah.txt", "r");
  fread(&read_data, sizeof(example), 1, fout);
  printf("%d\n%s\n%lf\n", read_data.number, read_data.text, read_data.real_number);
  fclose(fin);
  return 0;
}
