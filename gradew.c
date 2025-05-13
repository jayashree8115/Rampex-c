#include<stdio.h>
int main()
{
    int tam,eng,mat,sci,ss,total,avg;
    printf("tamil =");
    scanf("%d",&tam);
    printf("english=");
    scanf("%d",&eng);
    printf("maths=");
    scanf("%d",&mat);
    printf("science=");
    scanf("%d",&sci);
    printf("social science=");
    scanf("%d",&ss);
    total=tam+eng+mat+sci+ss;
    printf("total=%d\n",total);
    avg=total/5;
    printf("average=%d\n",avg);
    if(avg>90){
        printf("grade A");
        
    }
    else if(avg>75 && avg<90)
    {
        printf("grade B");
    }
else
{
    printf("grade C");