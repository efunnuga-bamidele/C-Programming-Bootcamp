#include <stdio.h>
#include <stdlib.h>


#define ARRAY_LEN 100
/* Macro functions*/
#define CALC_ARRAY_LEN(x) (sizeof((x)) / sizeof((x)[0]))
#define MAX(a, b) ((a) > (b) ? (a ): (b))

int main()
{
    printf("\n\n=== Functions Like Macros ===\n\n");
    
    double array[ARRAY_LEN];
    printf("Array length: %d\n", ARRAY_LEN);

#undef ARRAY_LEN
#define ARRAY_LEN 999

    printf("Array length: %d\n", ARRAY_LEN);

    int array_len = CALC_ARRAY_LEN(array);

    printf("Calculated Array length: %d\n", array_len);

    int a = -1, b = 5;
    printf("MAX(%d, %d): %d\n", a, b, MAX(a, b));

    int b_before = b;
    printf("MAX(%d, %d): %d\n", a, b, MAX(a, b++));

    printf("b before increment: %d\n", b_before);
    printf("b after increment: %d\n", b);


    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}