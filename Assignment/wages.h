#include <stdio.h>
#include <stdlib.h>
void testStructWrite();
void testStructRead();


void wagesMenu()
{
  printf("\n\t\t##Wages Menu##\n");
  printf("\n\t\t1. Add Wages");
  printf("\n\t\t2. Show Wages");
  printf("\n\t\t3. Update Wages");
  printf("\n\t\t4. Delete Wages");
  printf("\n\t\t5. Exit\n");
}


void testStructWrite()
{
  struct date *object=malloc(sizeof(struct date));
  strcpy(object->day,"Good day");
  object->month=6;
  object->year=2013;
  FILE * file= fopen("output", "wb");
  if (file != NULL) {
      fwrite(object, sizeof(struct date), 1, file);
      fclose(file);
  }
}


void testStructRead()
{
  struct date *object2=malloc(sizeof(struct date));
    FILE * file= fopen("output", "rb");
    if (file != NULL) {
        fread(object2, sizeof(struct date), 1, file);
        fclose(file);
    }
    printf("%s/%d/%d\n",object2->day,object2->month,object2->year);
}
