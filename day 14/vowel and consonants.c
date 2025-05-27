#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[100];
   
    printf("enter the alphjabet:");
    fgets(str,100,stdin);
    char ch=str[0];
   if(ch=='a'|| ch=='A'|| ch=='e'|| ch=='E'|| ch =='I'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
   {
       printf("vowel\n");
      
    }
    
    else
    {
        printf("consonants\n");
        
    }
}
