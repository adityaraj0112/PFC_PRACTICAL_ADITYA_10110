#include <stdio.h>
// ADITYA 10110
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x, y;
    printf("Enter two Numbers: ");
    scanf("%d %d", &x, &y);
    printf("Before Swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);  // pass addresses
    printf("After Swap: x = %d, y = %d\n", x, y);
    return 0;
}
/*ADITYA 10110
Enter two Numbers: 25
56
Before Swap: x = 25, y = 56
After Swap: x = 56, y = 25
*/