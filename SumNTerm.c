#include <stdio.h>

int main() {
    int a, d, n;
    float sum;

    printf("Enter first term: ");
    scanf("%d", &a);

    printf("Enter common difference: ");
    scanf("%d", &d);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    sum = (n * (2 * a + (n - 1) * d)) / 2.0;

    printf("Sum of first %d terms = %.2f", n, sum);

    return 0;
}
