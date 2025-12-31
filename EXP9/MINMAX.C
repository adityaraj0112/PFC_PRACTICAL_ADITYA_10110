// Name: Aditya Raj
// ERP: 10110
// Program: Max and Min element of an array

#include <stdio.h>

int main() {
    int arr[5], i;
    int max, min;

    printf("Enter 5 elements of array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    for(i = 1; i < 5; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);

    return 0;
}

/*
Output:
Enter 5 elements of array:
10 5 20 3 15
Maximum element = 20
Minimum element = 3
*/
