#include <stdio.h>

int Id, payRate, hours, gross;
char firstName[50];
char secondName[50];
char department[5];
char path[] = "C:\\Users\\Ciaran\\Documents\\ICT_ProceduralProgramming\\Assignment\\employee.txt";
void printDetails();


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

  printf("Please enter employee first name:\n");
  scanf("%s", &firstName);
  printf("Please enter employee first name:\n");
  scanf("%s", &secondName);
  printf("Please enter employee department:\n");
  scanf("%s", &department);
  printf("Please enter employee pay rate (euro per hour):\n");
  scanf("%d", &payRate);
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
  }
  else
  {
    // Invalid input, try again.
  }
}


int writeDetails()
{
  FILE *fptr;
  fptr=(fopen(path,"a"));
  if(fptr==NULL){
      printf("Error!\n\t\tError 1101: File write error!");
      return 1;
  }
  hours = 1;
  gross = payRate * hours;
  Id = 1001;
  fprintf(fptr,"\nName=%s %s \nDepartment=%s \nID=%d \nPay Rate=%d \nhours=%d \ngross=%d\n\n", firstName, secondName, department, Id, payRate, hours, gross);
  fclose(fptr);
  return 0;
}

void printDetails()
{
  printf("\n\t\tEmployee name:\t\t %s %s", firstName, secondName);
  printf("\n\t\tDepartment:\t\t %s", department);
  printf("\n\t\tPay rate:\t\t e%dp/h", payRate);
}
