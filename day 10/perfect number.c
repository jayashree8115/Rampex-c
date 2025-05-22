#include<stdio.h>
int perfect(int n)
{
    int sum=0;
    for( int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    return sum==n;

}


int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);

    if(perfect(num))
    
        printf(" %d it is a perfect number\n",num);
    
    else
    
        printf(" %d it is not a perfect number\n",num);
    return 0;
}

  
  
