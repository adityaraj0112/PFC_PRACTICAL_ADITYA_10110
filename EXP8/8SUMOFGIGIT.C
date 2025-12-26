#include <stdio.h>
// ADITYA 10110
int sumOfDigits(int n) {
    int sum = 0;
    while(n != 0) {
        sum += n % 10;  
        n /= 10;        
    }
    return sum;
}
int main() {
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    int result = sumOfDigits(n);
    printf("Sum of digits of %d = %d\n", n, result);

    return 0;
}
/* OUTPUT
Enter Number: 115
Sum of digits of 115 = 7
*/