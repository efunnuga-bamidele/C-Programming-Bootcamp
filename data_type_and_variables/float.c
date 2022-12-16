#include <stdio.h>
#include <stdlib.h>

int main()
{

    float pi = 3.14;

    // Format Specifiers
    // %f of %e

    /* 1.23456789 */
    double decimalDigits = 1.23456789;

    // Sientific Notation
    /* 7.801 x 10^9 */
    double worldPopulation = 7.801E9;

    /* 6.626 x 10^-34 */
    double plankConstant = 6.626E-34;

    printf("%12.1f | 1 decimal digit\n", decimalDigits);
    printf("%12.3f | 3 decimal digits\n", decimalDigits);
    printf("%12.1f | WorldPopulation, decimal, 1 digit of precision\n", worldPopulation);
    printf("%12.1e | WorldPopulation, scientific, 1 digit of precision\n", worldPopulation);
    printf("%12.3e | WorldPopulation, scientific, 3 digit of precision\n", worldPopulation);
    printf("%12.1E | PlankConstant, scientific, 1 digit of precision\n");
    printf("%12.3E | PlankConstant, scientific, 3 digit of precision\n");


    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}