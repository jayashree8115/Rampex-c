#include<stdio.h>
int main()
{
    int temp,a,b;
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
    int *ptr1=&a;
    int *ptr2=&b;
    int sum=*ptr1+*ptr2;
    printf("sum of two pointers: %d",sum);
    return 0;
}