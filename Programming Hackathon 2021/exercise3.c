#include <stdio.h>

// function prototypes
int check_skill(char skill, float *hourly_paid);
int check_hours(int hours);
void print_employee_info(int hours, float hourly_paid, float normal_pay, float overtime_pay);

int main()
{
float hourly_paid, normal_pay, overtime_pay;
int hours_worked;
char skill;
do
{   //display menu
    printf("____SKILL LEVEL____\n");
    printf("a- Level 1\nb- Level 2\nc- Level 3\n\n");
    printf("Which skill :");
    scanf("%c", &skill);
    if (!check_skill(skill, &hourly_paid)) // call of check_skill function
    {
        printf("Skill doesn't exit\n");
    }
}while (!check_skill(skill, &hourly_paid)); // call of check_skill function

do
{
    printf("Enter the number of hours worked :");
    scanf("%d", &hours_worked);
    printf("\n");
    if (!check_hours(hours_worked)) // call of check_hours function
    {
        printf("hours range not identified!\n");
    }
}while (!check_hours(hours_worked));   // call of check_hours function

normal_pay = hourly_paid * 40;      // pay corresponding to 40 hours
overtime_pay = (hours_worked - 40) * hourly_paid * 2;   // pay for overtime worked
print_employee_info(hours_worked, hourly_paid, normal_pay, overtime_pay); // call of print_employee_info function
}

/**
 * check_skill - checks wether the skill entered is valid or not
 * @skill: skill level
 * @hourly_paid: pointer to the hourly pay variable
 * Return: 1 is the level is found or 0 otherwise
*/
int check_skill(char skill, float *hourly_paid)
{
    switch (skill)
    {
    case 'a':
        *hourly_paid = 7.00;
        return 1;
     case 'b':
        *hourly_paid = 10.00;
        return 1;
     case 'c':
        *hourly_paid = 12.00;
        return 1;
    
    default:
        return 0;
    }
}
/**
 * check_hours - checks wether the given hours worked is valid or not
 * @hours: hours worked
 * Return: 1 if the input hours is correct or 0 otherwise
*/
int check_hours(int hours)
{
    if (hours == 40 || hours == 45 || hours == 50)
    {
        return 1;
    }
    else
    return 0;
}

/**
 * print_employee_info - prints the employee information
 * @hours: hours worked
 * @hourly_paid: pay for an hour
 * @normal_pay: pay for 40 hours
 * @overtime_pay: corresponding pay for overtime 
*/
void print_employee_info(int hours, float hourly_paid, float normal_pay, float overtime_pay)
{
    printf("Hours worked             : %d Hours\n", hours);
    printf("Hourly pay rate          : RM %.2f\n", hourly_paid);
    printf("Regular pay for 40 hours : RM %.2f\n", normal_pay);
    printf("Overtime pay             : RM %.2f\n", overtime_pay);
}

