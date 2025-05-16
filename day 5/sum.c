#include<stdio.h>
int main()
{
    int sum=0,digit,num=45;
    while(num!=0)
    {
    digit=num%10;
    sum+=digit;
    num/=10;
    }

printf("%d",sum);
}