#include <stdio.h>

int main() {
    int arr[] = {10, 2,6, 3, 4, 5};
    int *start=arr,*end=arr+5;
    while(start<end)
    {
        int temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    for(int i=0;i<6;i++)
    {
    printf("%d\n",arr[i]);
    }
}