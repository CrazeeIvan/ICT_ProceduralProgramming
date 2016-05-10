#include <stdio.h>
#include <stdlib.h>

char path[] = "employees.txt";


typedef struct{
  double Id, payRate, hours, gross;
  char firstName[50];
  char secondName[50];
  char department[5];
} Employee;


void employeeMenu()
{
  printf("\n\t\t##Employee Menu##\n");
  printf("\n\t\t1. Add Employees");
  printf("\n\t\t2. Show Employees");
  printf("\n\t\t3. Update Employees");
  printf("\n\t\t4. Delete Employees");
  printf("\n\t\t5. Back\n");
}


int save_employees(Employee *employees, int numEmployees)
{
  FILE*file_ptr;
	int i;
	char text[50];
	file_ptr = fopen(path, "w+");
	if(file_ptr!= NULL)
	{
		for(i = 0; i < numEmployees; i++)
    {
      char text[10];
      fputs(employees[i].firstName, file_ptr);
      fputs(employees[i].secondName, file_ptr);
      fputs(employees[i].department, file_ptr);
      snprintf(text, 10, "%.2f\n", employees[i].payRate);
      fputs(text, file_ptr);
    }
		fclose( file_ptr);
  }
	else
	{
		printf( "Unable to open file\n");
        return 1;
	}
}


int get_all_employees(Employee *employees)
{
  // fill the list with employees
	FILE*file_ptr;
	int i = 0;
	char text[50];
	file_ptr = fopen(path, "r");
	if(file_ptr!= NULL )
	{
		while(fgets(text, 50, file_ptr) )
		{
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


void get_new_employee(Employee *employees, int numEmployees)
{
    // Gather employee details
    printf("Enter first name of employee:\n");
    scanf(" %[^\n]", employees[numEmployees].firstName);
    strcat(employees[numEmployees].firstName, "\n");
    printf("Enter second name of employee: ");
    scanf(" %[^\n]", employees[numEmployees].secondName);
    strcat(employees[numEmployees].secondName, "\n");
    printf("Enter a department (IT/TEST/HR/SALES):\n");
    scanf("%s", &employees[numEmployees].department);
    strcat(employees[numEmployees].department, "\n");
    printf("Enter pay rate:\n");
    scanf("%lf", &employees[numEmployees].payRate);

}


void add_new_employee()
{
  printf("\n\t\t##Add Employee##\n");
  Employee* employees = malloc(20 * sizeof(Employee));
  // get a list of all employees
  int numEmployees = get_all_employees(employees);
  get_new_employee(employees, numEmployees);
  int confirm = 0;
  while (confirm != 1 && confirm != 2)
  {
    printf("\n\n\n\t\tSave?\n\t\t\t1. Yes/2. No\n");
    scanf("%1d", &confirm);
    if (confirm == 1)
    {
      // Save file
      save_employees(employees, numEmployees+1);
      printf("\n\nThe submitted details were saved to %s\n\n", path);
    }
    else if (confirm == 2)
    {
      // Prompt 'go back?' then go back to employee menu
      printf("\n\nSave aborted.\n");
      break;
    }
    else
    {
      printf("\n\nInvalid input, please try again.\n");
    }
  }
}


void print_all_details()
{
  Employee* employees = malloc(20 * sizeof(Employee));
  // get a list of all employees
  int numEmployees = get_all_employees(employees), i;
  for(i = 0; i < numEmployees; i++)
  {
    printf("\n*************************");
    printf("\nNumber: %d\n", i+1);
    printf("First Name: %s", employees[i].firstName);
    printf("Second Name: %s", employees[i].secondName);
    printf("Department: %s", employees[i].department);
    printf("Pay rate: %.2f\n", employees[i].payRate);
    // printf("Employee hours: %s\n", employees[i].hours);
    // printf("Employee gross: %s\n", employees[i].gross);
  }
}


void print_details(employeeNum)
{
  Employee* employees = malloc(20 * sizeof(Employee));
  // get a list of all employees
  int numEmployees = get_all_employees(employees), i;
  for(i = 0; i < numEmployees; i++)
  {
    if (employeeNum == i+1)
    {
      printf("\n*************************");
      printf("\nNumber: %d\n", i+1);
      printf("First Name: %s", employees[employeeNum].firstName);
      printf("Second Name: %s", employees[employeeNum].secondName);
      printf("Department: %s", employees[employeeNum].department);
      printf("Pay rate: %.2f\n", employees[employeeNum].payRate);
      // printf("Jours: %s\n", employees[employeeNum].hours);
      // printf("Gross: %s\n", employees[employeeNum].gross);
    }
  }
}


void update_employee()
{
  int employeeNum = 0;
  printf("Please select employee Number of the employee you would like to update:\n");
  scanf("%d", &employeeNum);
  Employee* employees = malloc(20 * sizeof(Employee));
  // get a list of all employees
  int numEmployees = get_all_employees(employees), i;
  employeeNum-=1;
  for(i = 0; i < numEmployees; i++)
  {
    if (employeeNum == i)
    {
      printf("Number: %d\n", employeeNum+1);
      printf("First Name: Current: %s", employees[employeeNum].firstName);
      scanf(" %[^\n]", employees[employeeNum].firstName);
      strcat(employees[employeeNum].firstName, "\n");
      printf("Second Name: Current: %s", employees[employeeNum].secondName);
      scanf(" %[^\n]", employees[employeeNum].secondName);
      strcat(employees[employeeNum].secondName, "\n");
      printf("Department: Current: %s ", employees[employeeNum].department);
      scanf("%s", &employees[employeeNum].department);
      strcat(employees[employeeNum].department, "\n");
      printf("Pay rate: Current: %.2f\n", employees[employeeNum].payRate);
      scanf("%lf", &employees[employeeNum].payRate);

      int confirm = 0;
      while (confirm != 1 && confirm != 2)
      {
        print_details(employeeNum);
        printf("\n\n\n\t\tSave?\n\t\t\t1. Yes/2. No\n");
        scanf("%1d", &confirm);
        if (confirm == 1)
        {
          // Save file
          save_employees(employees, numEmployees);
          printf("\n\nThe submitted details were saved to %s\n\n", path);
        }
        else if (confirm == 2)
        {
          // Prompt 'go back?' then go back to employee menu
          printf("\n\nSave aborted.\n");
          break;
        }
        else
        {
          printf("\n\nInvalid input, please try again.\n");
        }
      }

    }
  }
  print_details(employeeNum);
}
