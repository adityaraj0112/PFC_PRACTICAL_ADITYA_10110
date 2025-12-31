// Name: Aditya Raj
// ERP: 10110
// Program: Row wise sum of 2D array

#include <stdio.h>

int main() {
    int a[3][3], i, j;
    int sum;

    printf("Enter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        sum = 0;
        for(j = 0; j < 3; j++) {
            sum += a[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}

/*
Output:
Enter elements of 3x3 matrix:
1 2 3
4 5 6
7 8 9
Sum of row 1 = 6
Sum of row 2 = 15
Sum of row 3 = 24
*/
