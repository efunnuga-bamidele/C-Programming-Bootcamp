#include <stdio.h>
#include <stdlib.h>

void decompose(float number, int * int_part, float * float_part)
{
    *int_part = (int) number;
    *float_part = number - *int_part;
}

int main()
{
    int int_part;
    float frac_part, input;

    printf("Input a floating point number: ");
    scanf("%f", &input);

    decompose(input, &int_part, &frac_part);

    printf("Integer part of %.2f: %d\n", input, int_part);
    printf("Fractional part of %.2f: %.2f\n", input, frac_part);

    float reconstruct = int_part + frac_part;

    printf("Reconstructed number: %.2f\n", reconstruct);
    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}