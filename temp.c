#include<stdio.h>
int main()
{
    int temp;
    printf("enter temperature=");
    scanf("%d",&temp);
    if(temp<10)
    {
        printf("your outfit is jacket");
    }
    else if(temp>=10 && temp<=20)
    {
        printf("your outfit is sweater");
    }
    else
    {
        printf("your outfit is tshirt");
    }
    
}