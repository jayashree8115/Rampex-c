#include<stdio.h>
int main()
{
    char grade;
    printf("enter the grade=");
    scanf("%c",&grade);
    switch(grade)
    {
        case 'A':
        printf("distinction");
        break;
        case 'B':
        printf("very good");
        break;
        case 'C':
        printf("average");
        break;
        case 'D':
        printf("poor");
        default:
        printf("fail");
    }
}