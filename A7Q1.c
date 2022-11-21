// Write a program to find the Nth term of the Fibonnaci series.

#include<stdio.h>

int main()
{
    int N, fibo=0;
    int first_term=-1, second_term=1;
    printf("Enter value of N: ");
    scanf("%d",&N);
    for(int i=0; i<N; i++)
    {
    fibo=first_term+second_term;
    first_term=second_term;
    second_term=fibo;
    }
    printf("%dth term of fibonnaci series is %d",N,fibo);
    return 0;
}