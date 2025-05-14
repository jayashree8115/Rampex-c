#include<stdio.h>
#include<ctype.h>
int main()
{
    float c,f;
    printf("enter the  celcius:");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("fahrenheit =%.2f",f);
}