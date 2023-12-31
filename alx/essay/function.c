int (*select_operator())(int);

int main()
{
    int x;
    int (*selectedFunction)(int);

    selectedFunction = select_operator();
    if (selectedFunction != NULL)
    {
        x = selectedFunction(6, 2); // Example: Call the selected function with arguments 6 and 2
        printf("Result: %d\n", x);
    }
    else
    {
        printf("Invalid option.\n");
    }

    return 0;
}

int (*select_operator())(int)
{
    int option = 0;

    printf("Enter your choice (0-3): ");
    scanf("%d", &option);

    if (option >= 0 && option <= 3)
    {
        if (option == 0)
        {
            return add;
        }
        else if (option == 1)
        {
            return sub;
        }
        else if (option == 2)
        {
            return mul;
        }
        else if (option == 3)
        {
            return division;
        }
    }

    return NULL; // Invalid option
}

int add(int x, int y)
{
   return x + y;
}

int sub(int x, int y)
{
   return x - y;
}

int mul(int x, int y)
{
   return x*y;
}

int division(int x, int y)
{
   return x/y;
}