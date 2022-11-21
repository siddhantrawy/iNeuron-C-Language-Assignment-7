// Write a program to print all Prime numbers between two given numbers

#include<stdio.h>

int main()
{
    int num1, num2, min, max, i, j;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Prime numbers between %d and %d are - \n",num1,num2);
    min=(num1<num2)?num1:num2;
    max=(num1>num2)?num1:num2;

    for(i=min; i<=max; i++)
    {
        for(j=2; j<=i; j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
            printf("%d ",i);
    }

    return 0;
}