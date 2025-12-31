// Name: Aditya Raj
// ERP: 10110
// Program: Sum of diagonal elements of 2D array

#include <stdio.h>

int main() {
    int a[3][3], i, j;
    int sum = 0;

    printf("Enter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(i == j) {
                sum += a[i][j];
            }
        }
    }

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}

/*
Output:
Enter elements of 3x3 matrix:
1 2 3
4 5 6
7 8 9
Sum of diagonal elements = 15
*/
