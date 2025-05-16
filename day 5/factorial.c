#include<stdio.h>
int main()
{
    int i,fact=1;
    for(int i=1;i<=5;i++)
    {
        fact*=i;
    }
    printf("factorial of 5! %d",fact);
}
    