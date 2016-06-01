#include <stdio.h>
#include <stdlib.h>

char wages_path[] = "Payroll - 01-06-2016.txt";


void wagesMenu()
{
  printf("\n\t\t##Wages Menu##\n");
  printf("\n\t\t1. Add Wages");
  printf("\n\t\t2. Show Wages");
  printf("\n\t\t3. Update Wages");
  printf("\n\t\t4. Delete Wages");
  printf("\n\t\t5. Back\n");
}


int get_all_wages(Employee *employees)
{
  // fill the list with employees
	FILE*file_ptr;
	int i = 0;
	char text[50];

	file_ptr = fopen(wages_path, "r");
	if(file_ptr!= NULL )
	{
		while(fgets(text, 50, file_ptr))
		{
            strcpy(employees[i].firstName, text);
            fgets(text, 50, file_ptr);
            strcpy(employees[i].secondName, text);
            fgets(text, 50, file_ptr);
            strcpy(employees[i].department, text);
            fgets(text, 50, file_ptr);
            employees[i].gross = atof(text);
            i++;

            strcpy(employees[i].firstName, text);
            fgets(text, 50, file_ptr);
            strcpy(employees[i].secondName, text);
            fgets(text, 50, file_ptr);
            strcpy(employees[i].department, text);
            fgets(text, 50, file_ptr);
            employees[i].payRate = atof(text);
            i++;

		}
		fclose( file_ptr);
	}
	else
	{
		printf( "Unable to open file\n");
	}
    // return the number of employees
    return i;
}


void print_all_wages()
{
  Employee* employees = malloc(20 * sizeof(Employee));
  // get a list of all employees
  int numEmployees = get_all_wages(employees), i;
  for(i = 0; i < numEmployees; i++)
  {
    printf("\n*************************");
    printf("\nNumber: %d\n", i);
    printf("First Name: %s", employees[i].firstName);
    printf("Second Name: %s", employees[i].secondName);
    printf("Department: %s", employees[i].department);
    // printf("Pay rate: %.2f\n", employees[i].payRate);
    // printf("Employee hours: %s\n", employees[i].hours);
    printf("Employee gross: %.2f\n", employees[i].gross);
  }
}
