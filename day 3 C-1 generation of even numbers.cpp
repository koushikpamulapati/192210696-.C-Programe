#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Even number series up to %d: \n", n);
    for (i = 2; i <= n; i += 2) {
        printf("%d\n", i);
    }
    return 0;
}

	

