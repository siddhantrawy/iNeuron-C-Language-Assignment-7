// Write a program to print first N terms of Fibonacci series

#include<stdio.h>

int main()
{
    int N, fibo=0;
    int first_term=-1, second_term=1;
    printf("Enter value of N : ");
    scanf("%d",&N);
    for(int i=0; i<N; i++)
    {
        fibo=first_term+second_term;
        printf("%d ",fibo);
        first_term=second_term;
        second_term=fibo;
    }
    return 0;
}