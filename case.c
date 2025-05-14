#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("enter the alphabet=");
    scanf("%c",&ch);
    if(isupper(ch))
    {
        printf("alphabet is uppercase %c",ch);
    }
    else if(islower(ch))
    {
        printf("alphabet is lower case %c",ch);
    }
    else
    {
        printf("it is not a alphabet");
    }
}