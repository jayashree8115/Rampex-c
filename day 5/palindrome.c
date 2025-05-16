#include<stdio.h>
int main()
{
    int num=528,rev=0,rem,original;
    original=num;
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    printf("reversd number %d\n",rev);
    if(original==num)
    {
        printf("it is a palindrome %d\n",original);
    }
    else
    {
        printf("it is not a palindrome %d\n",original);
    }
    
}