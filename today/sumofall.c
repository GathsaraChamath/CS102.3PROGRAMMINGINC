#include <stdio.h>
int main()
{
    int num,x,count=0;

    printf("Enter the numbers ");
    scanf("%d",&num);

    while(num>0)
    {
        x=num%10;
        count+=x;
        num/=10;
    }
    printf("sum of the count %d \n",count);
}
