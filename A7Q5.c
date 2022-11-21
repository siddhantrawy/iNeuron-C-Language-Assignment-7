// Write a program to check whether two given numbers are co-prime numbers or not

#include<stdio.h>

int main()
{
    int num1, num2, min, i;
    printf("Enter two numbers:\n");
    scanf("%d%d",&num1,&num2);

    min=(num1<num2)?num1:num2;

    for(i=min; i>0; i--)
    {
        if(num1%i==0 && num2%i==0)
            break;
    }

    if(i==1)
        printf("%d and %d are co-prime numbers.",num1,num2);
    else
        printf("%d and %d are not co-prime numbers.",num1,num2);

    return 0;
}