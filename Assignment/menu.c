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
#include <ctype.h>
#include <stdbool.h>

#include "controller.h"

void mainMenu();
void employeeMenu();
void payRollMenu();

int main ()
{
    mainMenu();
    return 0;
}


void mainMenu()
{
  char str[10];
	int choice;
	do{
    printf("\n\t\t##Main Menu##\n");
    printf("\n\t\t1. Employees");
    printf("\n\t\t2. Payroll\n\n");
    printf("\n\t\t5. Exit\n");
		scanf("%s", str);
    choice = atoi(str);

		switch(choice){
			case 1: employeeMenu();
				break;
			case 2: payRollMenu();
				break;
			case 5: printf("Exiting program.\n\n");
				exit(0);
				break;
			default: printf("Invalid choice!\n");
                break;
		}
	}while(choice != 5);
}


void employeeMenu()
{
  char str[10];
	int choice;
	do{
    printf("\n\t\t##Employee Menu##\n");
    printf("\n\t\t1. Add Employees");
    printf("\n\t\t2. Show Employees");
    printf("\n\t\t3. Update Employees");
    printf("\n\t\t4. Delete Employees");
    printf("\n\t\t5. Back\n");
		scanf("%s", str);
    choice = atoi(str);
		switch(choice){
			case 1: add_new_employee();
				break;
			case 2: print_all_details();
				break;
      case 3: update_employee();
				break;
      case 4: delete_employee();
				break;
			case 5: break;
			default: printf("Invalid choice!\n");
                break;
		}
	}while(choice != 5);
}


void payRollMenu()
{
  char str[10];
	int choice;
	do{
    printf("\n\t\t##Wages Menu##\n");
    printf("\n\t\t1. Run payroll\n\n");
    printf("\n\t\t5. Back\n");
		scanf("%s", str);
    choice = atoi(str);
		switch(choice){
			case 1: run_payroll();
				break;
			case 5: break;
			default: printf("Invalid choice!\n");
                break;
		}
	}while(choice != 5);
}
