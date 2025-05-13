#include <stdio.h>

int main() {
    int age;
    printf("enter your age: ");
    scanf("%d",&age);
    if(age>=18){
        printf("eligible to get licence\n");
        
    }
    else{
       printf("not eligible to get licence\n");
    }
    char choice;
printf("you need licence or not");
    printf("Enter y or n: ");
    scanf(" %c", &choice); 

    if (choice == 'y')
    {
        printf("You chose yes.\n");
    }
    else if (choice == 'n')
    {
        printf("You chose no.\n");
    }
    else
    {
        printf("invalid");
    }
        if(age>18 && choice=='y')
        {
            printf("eligible to drive");
        }
        else
        {
            printf("not eligible o drive");
        }
    
    
    
    return 0;
}