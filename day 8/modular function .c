#include<stdio.h>
 int sub(int x,int y)
 {
     return x-y;;
 }
 
 
 int add(int x,int y)
 {
     return x+y;
 }
 
 
 int mul(int x,int y)
{
    return x*y;
}

int div(int x,int y)
{
    return x/y;
}
    int main()
{
    printf("add %d\n",add(3,4));
    printf("sub %d\n",sub(3,4));
    printf("multiplication %d\n",mul(3,4));
    printf("division %d\n",div(12,4));
    return 0;
}