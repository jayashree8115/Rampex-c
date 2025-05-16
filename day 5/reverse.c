#include<stdio.h>
int main()
{
    int num=528,rev=0,rem;
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    printf("reversd nmber %d",rev);
    
}

