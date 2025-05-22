#include <stdio.h>

int reverse(int num,int rev)
{
    if (num == 0) 
    return rev;
  
    return reverse(num / 10,rev*10+num%10);
}

int main() 
{
    int num,result,rev=0;
    printf("Enter a number: ");
    scanf("%d", &num);
 result=reverse(num,rev);
    printf("%d\n",result);
    return 0;
}

