#include<stdio.h>
int main()
{
    int temp,a,b;
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
    int *x=&a;
    int *y=&b;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("after swap:\n a=%d\n b=%d",a,b);
    return 0;
}