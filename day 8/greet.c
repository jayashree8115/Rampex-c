#include<stdio.h>
void greet( const char name[], const char role[])
{
    printf("welcome %s as a %s\n",name,role);
}
int main()
{
    greet("jayashree","project manager");
    return 0;
}