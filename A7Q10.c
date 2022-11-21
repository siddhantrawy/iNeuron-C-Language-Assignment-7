// Write a program to print all Armstrong numbers under 1000

#include<stdio.h>

int main()
{
    int rem, arm, temp;
    printf("Armstrong numbers under 1000 are\n");
    for(int num=1; num<=1000; num++)
    {
        arm=0;
        temp=num;
        while(temp!=0)
        {
            rem=temp%10;
            arm=arm+(rem*rem*rem);
            temp=temp/10;
        }
        if(arm==num)
        {
            printf("%d\n",num);
        }
    }
    return 0;
    
}