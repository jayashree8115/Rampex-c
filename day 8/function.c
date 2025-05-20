#include <stdio.h>

int add(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int number1, number2, sum;

    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);


    sum = add(number1, number2);

    printf("%d + %d = %d\n", number1, number2, sum);

    return 0;
}