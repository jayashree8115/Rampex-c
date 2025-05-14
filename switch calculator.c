#include<stdio.h>
int main()
{
    char op;
    int a,b;
    a=20;
    b=4;
    printf("enter thhe operator:");
    scanf("%c",&op);
    switch(op)
    {
        case '+':
        printf("result= %d\n",a+b);
        break;
        case '-':
        printf("result = %d\n",a-b);
        break;
        case '*':
        printf("result =%d\n",a*b);
        break;
        case '/':
        printf("result =%d\n",a/b);
        break;
        default:
        printf("error! invalid operator!!!");
        break;
    }
}