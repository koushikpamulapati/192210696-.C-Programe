#include <stdio.h>

int main() {
    int n, sum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }
    printf("Sum of the digits of the integer: %d", sum);
    return 0;
}
