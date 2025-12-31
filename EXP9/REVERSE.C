// Name: Aditya Raj
// ERP: 10110
// Program: Reverse an Array

#include <stdio.h>

int main() {
    int arr[5], i;

    printf("Enter 5 elements of array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Reversed Array:\n");
    for(i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
Output:
Enter 5 elements of array:
1 2 3 4 5
Reversed Array:
5 4 3 2 1
*/
