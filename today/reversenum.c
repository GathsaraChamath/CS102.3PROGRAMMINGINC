#include <stdio.h>
int main()
{
    int num,revnum = 0;

    printf("Enter a number ");
    scanf("%d",&num);
    do
    {
        int digit = num % 10;
        revnum = revnum * 10 + digit;
        num/= 10;
    }
        while (num != 0);

         printf("The revered number is %d",revnum);


}
