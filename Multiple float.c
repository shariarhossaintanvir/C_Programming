#include <stdio.h>

int main() {
    float a, b, product;

    printf("Enter first number: ");

    scanf("%f", &a);
    printf("Enter Second Number: ");
    scanf("%f", &b);
    product = a * b;
    printf("Product = %.2f\n", product);
    return 0;
}
