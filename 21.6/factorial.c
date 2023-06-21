#include <stdio.h>

int main()
{
    int number;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);


    if (number < 0)
    {
        printf("Error.\n");
    } else
    {
        for (int i = 1; i <= number; i++)
        {
            factorial *= i;
    }

        printf("Factorial of %d is: %llu\n", number, factorial);
    }

}
