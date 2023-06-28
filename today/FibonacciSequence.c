#include <stdio.h>

int main()
{
    int n1 = 0, n2 = 1, nextn;

    printf("First 10 numbers of the Fibonacci sequence:\n");

    printf("%d\n", n1);
    printf("%d\n", n2);

    for (int i = 3; i <= 10; i++)
    {
        nextn = n1 + n2;
        printf("%d\n", nextn);
        n1 = n2;
        n2 = nextn;
    }
}
