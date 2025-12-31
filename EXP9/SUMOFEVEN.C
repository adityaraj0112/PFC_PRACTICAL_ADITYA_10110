// Name: Aditya Raj
// ERP: 10110
// Program: Sum of all even elements of an array

#include <stdio.h>

int main() {
    int arr[5], i;
    int sum = 0;

    printf("Enter 5 elements of array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++) {
        if(arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    printf("Sum of even elements = %d", sum);

    return 0;
}

/*
Output:
Enter 5 elements of array:
1 2 3 4 5
Sum of even elements = 6
*/
