// The project taken on by the company is to create an application to process the
// payroll of the client. The document does not contain enough details about the
// application. Therefore, you have been asked to interview the client to gather
// the requirements of the application, and to produce a report highlighting the
// design specification of the solution in which should include, for example:
// diagram, inputs, outputs, and any other relevant information about the

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "controller.h"

void mainMenu();
void employeeMenu();
void payRollMenu();

int main ()
{
  int option, submenu;
  while(option!=5)
  {
    mainMenu();
    scanf("%1d", &option);
    if (option == 1)
    {
      while(submenu!=5)
      {
        employeeMenu();
        scanf("%1d", &submenu);
        if (submenu == 1)
        {
          add_new_employee();
        }
        else if (submenu == 2)
        {
          print_all_details();
        }
        else if (submenu == 3)
        {
          update_employee();
        }
        else if (submenu == 4)
        {
            delete_employee();
        }

      }
    }
    else if (option == 2)
    {
      while(submenu!=5)
      {
        payRollMenu();
        scanf("%1d", &submenu);
        if (submenu == 1)
        {
            run_payroll();
        }
        else if (submenu == 2)
        {

        }
      }
    }
    else if (option != 5)
    {
      printf("\nInvalid selection. Please enter a value between 1-3");
    }
    submenu=0;
  }
  return 0;
}


void mainMenu()
{
  printf("\n\t\t##Main Menu##\n");
  printf("\n\t\t1. Employees");
  printf("\n\t\t2. Payroll\n\n");
  printf("\n\t\t5. Exit\n");
}


void employeeMenu()
{
  printf("\n\t\t##Employee Menu##\n");
  printf("\n\t\t1. Add Employees");
  printf("\n\t\t2. Show Employees");
  printf("\n\t\t3. Update Employees");
  printf("\n\t\t4. Delete Employees");
  printf("\n\t\t5. Back\n");
}


void payRollMenu()
{
  printf("\n\t\t##Wages Menu##\n");
  printf("\n\t\t1. Run pay roll\n\n");
  printf("\n\t\t5. Back\n");
}
