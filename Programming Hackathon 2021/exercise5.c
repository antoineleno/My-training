#include <stdio.h>
#include <ctype.h>

// constant definition
#define MIN_TAX 15
#define MAX_TAX 30

//function prototypes
void single_tax(float income, char status);
void maried_tax(float income, char status);

int main()
{
    float income;
    char status;
    do
    {
        printf("Enter your income: ");
        scanf("%f", &income);
        if (income <= 0)
        {
            printf("\nWrong input income\n");
        }
    }while(income <= 0);
   
    do
    {
        printf("Enter status S/M: ");
        scanf("%c", &status);
        status = tolower(status); // converts status in lowercase to be able to handle uppercase and lowercase
        if ((status != 's' && status != 'm') )
        {
            printf("\nWrong input status\n");
        }
    } while ((status != 's' && status != 'm'));
    if (status == 's')
    {
        single_tax(income, status); // call  of the function single_tax
    }
    else
    {
        maried_tax(income, status); // call of the function maried_tax
    }
    
}


/**
 * maried_tax - caculates the equivalent tax for status M
 * @income: income
 * @status: status
*/
void maried_tax(float income, char status)
{
    float tax;
    if (income < 20000)
    {
        tax = (income * MIN_TAX) / 100;
    }
    else
    {
        tax = (income * MAX_TAX) / 100;
    }
    printf("\nCode status : %c\n", toupper(status));  // use of toupper built in function to reconvert status into uppercase
    printf("Income        :$ %.2f\n", income);
    printf("Amount of tax :$ %.2f\n", tax);

}

/**
 * single_tax - calculates the equivalent tax for status S
 * @income: income
 * @status: status
*/
void single_tax(float income, char status)
{
    float tax;
    if (income <= 10000)
    {
        tax = (income * MIN_TAX) / 100;
    }
    else
    {
        tax = (income * MAX_TAX) / 100;
    }
    printf("\nCode status : %c\n", toupper(status)); // use of toupper built in function to reconvert status into uppercase
    printf("Income        :$ %.2f\n", income);
    printf("Amount of tax :$ %.2f\n", tax);

}
