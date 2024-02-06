#include <stdio.h>
#include <string.h>
/**
 * struct employee - structure to define the employee's information
 * @name: name of the employee
 * @id: id of the employee
 * @salary: salary of the employee
*/
typedef struct  employee
{
    char name[40];
    int id;
    float salary;
}Employee;

//function prototypes
void display_information(Employee *employee);
void search_info_by_ID(Employee *employee, int id);

int main()
{
    Employee employee[4]; // array of 4 employees
    int choice, id;

    // employees' information setting
    employee[0] = (Employee){"Kim Yee", 101, 40000.00};
    employee[1] =(Employee) {"John Reynolds", 102, 55000.00};
    employee[2] = (Employee){"Elena Gonzales", 103, 50500.00};
    employee[3] = (Employee){"Jim O'Shea", 104, 75000.00};

    do
    {
        printf("_________MENU__________\n");
        printf("1- DISPLAY\n2- SEARCH BY ID\n3- EXIT\n\nCHOICE: ");
        scanf("%d", &choice);
    
        if (choice == 1)
        {
            // call of the function display_information
            display_information(employee); 
        }
        else if (choice == 2)
        {
            printf("Enter the ID : ");
            scanf("%d", &id);
            printf("\n");
            // call of the function search_info_by_ID
            search_info_by_ID(employee, id);
        }
        else
        {
            printf("\nInvalid choice\n");
        }
    }while (choice != 3);
    
    
}

/**
 * display_information - displays the employees' information
 * @employee: pointer to the array of employees
*/
void display_information(Employee *employee)
{
    for (int i = 0; i < 4; i++)
    {
        printf("        Employee %d\n", i + 1);
        printf("**************************\n");
        printf("Employee's name: %s\n", employee[i].name);
        printf("ID             : %d\n", employee[i].id);
        printf("Salary         : $%.2f\n", employee[i].salary);
        printf("**************************\n");
        printf("\n");
    }   
}

/**
 * search_info_by_ID - searches an employee by his/her ID
 * @employee: pointer to the array of employees
 * @id: ID number
*/
void search_info_by_ID(Employee *employee, int id)
{
    int i;
    for (i = 0; i < 4; i++)
    {
        if (id == employee[i].id)
        {
            printf("            Employee %d\n", i + 1);
            printf("**************************\n");
            printf("Employee's name: %s\n", employee[i].name);
            printf("ID             : %d\n", employee[i].id);
            printf("Salary         : $%.2f\n", employee[i].salary);
            printf("**************************\n");
            printf("\n");
            break;
        }
    
    }
    if (i == 4)
    {
        printf("\nID : %d not found\n", id);
    }   
}
