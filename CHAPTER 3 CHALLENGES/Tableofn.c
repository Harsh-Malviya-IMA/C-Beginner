#include <stdio.h>

int main() {
    int n;

    // User se input lena
    printf("Enter a number to print its table: ");
    scanf("%d", &n);

    // Table print karna
    printf("Table of %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
