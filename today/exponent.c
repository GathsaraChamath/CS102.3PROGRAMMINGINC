#include <stdio.h>
int main()
{
    int b,expo,x=1;

    printf("Enter the number");
    scanf("%d", &b);

    printf("Enter the exponent");
    scanf("%d", &expo);

        for (int i = 1; i <= expo; i++) {
        x*= b;
    }

    printf("%d raised to the power of %d is: %d\n", b, expo, x);
}


