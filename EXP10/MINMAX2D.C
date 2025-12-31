// Name: Aditya Raj
// ERP: 10110
// Program: Max and Min element in 2D array

#include <stdio.h>

int main() {
    int a[3][3], i, j;
    int max, min;

    printf("Enter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    max = min = a[0][0];

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(a[i][j] > max)
                max = a[i][j];
            if(a[i][j] < min)
                min = a[i][j];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);

    return 0;
}

/*
Output:
Enter elements of 3x3 matrix:
1 2 3
4 5 6
7 8 9
Maximum element = 9
Minimum element = 1
*/
