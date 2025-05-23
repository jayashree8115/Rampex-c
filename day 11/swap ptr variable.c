#include<stdio.h>
int main()
{
    int temp,a,b;
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
    int *ptr1=&a;
    int *ptr2=&b;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("after swap:\n a=%d\n b=%d",a,b);
    return 0;
}