// Write a program to calculate HCF of two numbers

#include<stdio.h>

int main()
{
    int num1, num2, min, i;
    printf("Enter two positive numbers: \n");
    scanf("%d%d",&num1, &num2);

    min=(num1<num2)?num1:num2;

    for(i=min; i>0; i--)
    {
        if(num1%i==0 && num2%i==0)
            break;
    }
    printf("HCF of %d and %d is %d",num1, num2, i);
    return 0;
}