#include<stdio.h>
int main()
{
    int total_mark;
    printf("enter your total marks in english : ");
    scanf("%d",&total_mark);
    if(total_mark>35)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }
}