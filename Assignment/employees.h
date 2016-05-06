#include <stdio.h>
#include <stdlib.h>

int i =0;
char path[] = "employee.txt";
char path2[] = "inisfree.txt";
void printDetails();
void getDetails();

typedef struct
{
  int Id, payRate, hours, gross;
  char firstName[50];
  char secondName[50];
  char department[5];
} emp;

emp data = {}, read_data;

void employeeMenu()
{
  printf("\n\t\t##Employee Menu##\n");
  printf("\n\t\t1. Add Employees");
  printf("\n\t\t2. Show Employees");
  printf("\n\t\t3. Update Employees");
  printf("\n\t\t4. Delete Employees");
  printf("\n\t\t5. Back\n");
}


void addEmployee()
{
  int confirm = 0;
  printf("\n\t\t##Add Employee##\n");
  while (confirm != 1 && confirm != 2)
  {
    getDetails();
    printDetails();
    printf("\n\n\n\t\tSave?\n\t\t\t1. Yes/2. No\n");
    scanf("%1d", &confirm);
    if (confirm == 1)
    {
      // Save file
      writeDetails();
      printf("\n\nThe submitted details were saved to %s\n\n", path);
    }
    else if (confirm == 2)
    {
      // Prompt 'go back?' then go back to employee menu
      printf("\n\nSave aborted.\n");
    }
    else
    {
      printf("\n\nInvalid input, please try again.\n");
    }
  }
}


int writeDetails()
{
    // FILE*file_ptr; int i;
    // char text[50];
    // file_ptr = fopen( path2, "r+a");
    //
    // // text[50] = "\n" + data.firstName + "\n" + data.secondName + "\n" + data.department + "\n" + data.payRate;
    // if(file_ptr!= NULL )
    // {
    //     printf( "File inisfree.txt opened\n" );
    //     while(fgets(text, 50, file_ptr) )
    //     {
    //         printf( "%s", text) ;
    //     }
    //
    //     strcpy( text, "test_add");
    //     fputs( text, file_ptr) ;
    //     fclose( file_ptr);
    //     // printf("%s", sizeof(text));
    // }
    // else
    // {
    //     printf( "Unable to open file\n");
    // }

    //   printf("\nName=%s %s \nDepartment=%s \nID=%d \nPay Rate=%d \nhours=%d \ngross=%d\n\n", data.firstName, data.secondName, data.department, data.Id, data.payRate, data.hours, data.gross);
    //   FILE* fout = fopen(path, "wb");
    //   fwrite(&data, sizeof(emp), 1, fout);
    //   fclose(fout);
}


void printDetails()
{
  printf("\n\t\tEmployee name:\t\t %s %s", data.firstName, data.secondName);
  printf("\n\t\tDepartment:\t\t %s", data.department);
  printf("\n\t\tPay rate:\t\t e%dp/h", data.payRate);
  printf("\n\t\tHours: \t\t\t %d", data.hours);
  printf("\n\t\tGross pay:\t\t %d", data.gross);
  printf("\n\t\tEmployee ID:\t\t %d", data.Id);
}


void getDetails()
{
  fflush(stdin);
  printf("Please enter employee first name:\n");
  gets(data.firstName);
  printf("Please enter employee first name:\n");
  gets(data.secondName);
  printf("Please enter employee department:\n");
  gets(data.department);
  printf("Please enter employee pay rate (euro per hour):\n");
  scanf("%d", &data.payRate);
  data.hours = 0;
  data.gross = data.payRate * data.hours;
  data.Id = 1001;
}
void test_save_details()
{
    FILE*file_ptr; int i;
    char text[50];
    file_ptr = fopen( path2, "r+a");

    // text[] = "\n" + data.firstName + "\n" + data.secondName + "\n" + data.department + "\n" + data.payRate
    if(file_ptr!= NULL )
    {
        printf( "File inisfree.txt opened\n" );
        while(fgets(text, 50, file_ptr) )
        {
            printf( "%s", text) ;
        }

        strcpy( text, "test_add");
        fputs( text, file_ptr) ;
        fclose( file_ptr);
        // printf("%s", sizeof(text));
    }
    else
    {
        printf( "Unable to open file\n");
    }
}

void WriteFile()
{
//     printf("Attempting to write...");
//     FILE* fp = 0;
//     char* buffer = 0;
//     int i=0;
//
//     /* allocate */
//     buffer = malloc ( 150 );
//     bzero( buffer, 150 );
//
//     /* copy the data to a string */
//     snprintf(buffer, 150, "\t\r\nName=%s %s \t\r\nDepartment=%s \t\r\nID=%d \t\r\nPay Rate=%d \t\r\nhours=%d \t\r\ngross=%d\t\r\n", q->firstName, q->secondName, q->department, q->Id, q->payRate, q->hours, q->gross);
//     // snprintf( buffer, 150, "%s\t%s\t%d\t%s\t%.2f\t%.2f\t%d/%d/%d\t%d/%d/%d\t%d/%d/%d\n",q->name,q->numberplate,q->km,q->phonenumber,q->overall_cost,q->paid_cost,q->dateIn->day,q->dateIn->month,q->dateIn->year,q->dateServiced->day,q->dateServiced->month,q->dateServiced->year,q->dateOut->day,q->dateOut->month,q->dateOut->year);
//     printf("\n");
//
//     fp = fopen("arxeio3.txt", "a" );
//     fputs( buffer, fp );
//     fputs("\n",fp);
//
//     free( buffer );
//     fclose( fp );
}



void loadDetails()
{
  FILE* fin = fopen(path, "rb");
  fread(&read_data, sizeof(emp), 1, fin );
  printf("\nName=\"%s %s\" \nDepartment=\"%s\" \nID=\"%d\" \nPay Rate=\"%d\" \nhours=\"%d\" \ngross=\"%d\"\n\n", read_data.firstName, read_data.secondName, read_data.department, read_data.Id, read_data.payRate, read_data.hours, read_data.gross);
  fclose(fin);
}
