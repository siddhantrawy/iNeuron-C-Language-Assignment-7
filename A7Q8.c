// Write a program to find next Prime number of a given number

#include<stdio.h>
int main()
{
    int num, i, j;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=num+1; ; i++)
    {
        for(j=2; j<i; j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
            break;
    }
    printf("The next prime number of %d is %d.",num,i);
    
    return 0;
}

