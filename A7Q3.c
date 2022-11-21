// Write a program to check whether a given number is there in the Fibonacci series or not

#include<stdio.h>

int main()
{
    int num, fibo=0, flag=0;
    int first_term=-1, second_term=1;
    printf("Enter a positive number: ");
    scanf("%d",&num);
    for(int i=0; fibo<=num; i++)
    {
    fibo=first_term+second_term;
    printf("%d ",fibo);
    if(fibo==num)
    {
        flag=1;
        break;
    }

    first_term=second_term;
    second_term=fibo;
    }

    if(flag==1)
        printf("\n%d is present in fibonnaci series.",num);
    else
        printf("\n%d is not present in fibonnaci series.",num);
    return 0;
}