#include<stdio.h>
int isprime(int n)
{
    if(n<2)
    {
        return 0;
    }
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 0;
}

int main()

{
    int n=5;
if(isprime(n))
{
    printf("prime number %d",n);
    
}
else
{
    printf("not a prime number %d",n);
}
}