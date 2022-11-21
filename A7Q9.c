// Write a program to check whether a given number is an Armstrong number or not

#include<stdio.h>

int main()
{
    int num, temp, rem=0,arm=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;
    for(int i=0; temp!=0; i++)
    {
        rem=temp%10;
        arm=arm+(rem*rem*rem);
        temp=temp/10;
    }
    if(arm==num)
        printf("%d is an Armstrong number.",num);
    else
        printf("%d in not an Armstrong number.",num);
    return 0;
}