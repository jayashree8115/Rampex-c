#include<stdio.h>
int main()
{
    int circle,rectangle,triangle,r,b,h,l,w;
    printf("enter radius\n");
    scanf("%d",&r);
    circle=3.14*r*r;
    printf("area of the circle is %d\n",circle);
    printf("enter length and breadth\n");
    scanf("%d %d",&l,&b);
    rectangle=l*b;
    printf("area of the reactangle: %d\n",rectangle);
    printf("enter the base and height\n");
    scanf("%d %d",&b,&h);
    triangle=1/2*b*h;
    printf("area of the triangle %d\n",triangle);
  
        
    
}