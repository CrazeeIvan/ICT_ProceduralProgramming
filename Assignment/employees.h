#include <stdio.h>
int i =0;

char path[] = "employee.txt";
void printDetails();
void getDetails();

struct e
{
  int Id, payRate, hours, gross;
  char firstName[50];
  char secondName[50];
  char department[5];
};
struct e emp[1], b[1];

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
  char confirm;
  printf("\n\t\t##Add Employee##\n");
  getDetails();
  printDetails();
  printf("\n\n\n\t\tSave?\n\t\t\t1. Yes/2. No\n");
  while (confirm != 1 && confirm != 2)
  {
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
    }
    else
    {
      // Invalid input, try again.
      printf("\n\nInvalid input, please try again.\n");
    }
  }
}


int writeDetails()
{
  // FILE *fptr;
  // fptr=(fopen(path,"a"));
  // if(fptr==NULL){
  //     printf("Error!\n\t\tError 1101: File write error!");
  //     return 1;
  // }
  // fprintf(fptr,"\nName=%s %s \nDepartment=%s \nID=%d \nPay Rate=%d \nhours=%d \ngross=%d\n\n", emp.firstName, emp.secondName, emp.department, emp.Id, emp.payRate, emp.hours, emp.gross);
  // fclose(fptr);
  // return 0;
}


void printDetails(int i)
{
  for (i=0;i<1;++i)
  {
    printf("\n\t\tEmployee name:\t\t %s %s", emp[i].firstName, emp[i].secondName);
    printf("\n\t\tDepartment:\t\t %s", emp[i].department);
    printf("\n\t\tPay rate:\t\t e%dp/h", emp[i].payRate);
    printf("\n\t\tPay rate:\t\t %d", emp[i].hours);
    printf("\n\t\tPay rate:\t\t %d", emp[i].gross);
    printf("\n\t\tPay rate:\t\t %d", emp[i].Id);
  }
}


void getDetails()
{
  FILE *fptr;
  fptr=fopen(path,"a");
  for(i=0;i<1;++i)
  {
    fflush(stdin);
    printf("Please enter employee first name:\n");
    gets(emp[i].firstName);
    printf("Please enter employee first name:\n");
    gets(emp[i].secondName);
    printf("Please enter employee department:\n");
    gets(emp[i].department);
    printf("Please enter employee pay rate (euro per hour):\n");
    scanf("%d",&emp[i].payRate);
    emp[i].hours = 0;
    emp[i].gross = emp[i].payRate * emp[i].hours;
    emp[i].Id = 1001;
  }
  if(fptr==NULL)
  {
      printf("Error!\n\t\tError 1101: File write error!");
  }
  // fprintf(fptr,"\nName=%s %s \nDepartment=%s \nID=%d \nPay Rate=%d \nhours=%d \ngross=%d\n\n", emp.firstName, emp.secondName, emp.department, emp.Id, emp.payRate, emp.hours, emp.gross);
  // fclose(fptr);


  fwrite(emp, sizeof(emp), 2, fptr);
  fprintf(fptr,"\n");
  fclose(fptr);
  fptr=fopen("file.txt","rb");
  fread(b,sizeof(b),1,fptr);
  for(i=0;i<15;++i)
  {
      printf("Name: %s\n",b[i].firstName);
  }

  fclose(fptr);

}
