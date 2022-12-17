#include <stdio.h>
#include <stdlib.h>

int main()
{

    // int a, b;
    float a, b;

    a = 3.14;
    b = a++ * 2 + 1;

    printf("After postincrement:\n");
    printf("a: %.2f\n", a);
    printf("b: %.2f\n", b);

    a = 3.14;
    b = ++a * 2 + 1;

    printf("After preincrement:\n");
    printf("a: %.2f\n", a);
    printf("b: %.2f\n", b);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}