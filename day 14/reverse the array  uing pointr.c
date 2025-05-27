#include <stdio.h>

int main() {
    int arr[] = {10, 2, 3, 4, 5};
    int *p = arr;

    for (int i = 4; i >= 0; i--) {
        printf("arr[%d] = %d\n", i, *(p + i));
    }

    return 0;
}
