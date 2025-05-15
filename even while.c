#include<stdio.h>
int main()
{
   int a;
   for(a=1;a<=50;a++)
   {
    while(a%2==0)
    {
        printf("even number is %d\n",a);
        a++;
    }
   }
}