// Write a program to find the position of first 1 in LSB.

#include<stdio.h>

int main()
{
    int num, count=1;
    printf("Enter a number: ");
    scanf("%d",&num);

    while(num!=0)
    {
        if(num&1==1)
        {
            printf("Position of first LSB is %d.",count);
            break;
        }
        num=num>>1;
        count++;
        
    }
    return 0;
}