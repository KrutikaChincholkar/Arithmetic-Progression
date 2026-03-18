#include <stdio.h>

int main() {
    int a, d, n, nth;

    printf("Enter first term: ");
    scanf("%d", &a);

    printf("Enter common difference: ");
    scanf("%d", &d);

    printf("Enter term number (n): ");
    scanf("%d", &n);

    nth = a + (n - 1) * d;

    printf("The %dth term of the AP is: %d", n, nth);

    return 0;
}
