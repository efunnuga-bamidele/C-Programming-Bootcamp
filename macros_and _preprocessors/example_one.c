#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LEN 100

int main()
{
    printf("\n\n=== Functions Like Macros ===\n\n");

    double array[ARRAY_LEN];

    printf("Array length: %d\n", ARRAY_LEN);

#undef ARRAY_LEN
#define ARRAY_LEN 999

    printf("new Array lenght: %d\n", ARRAY_LEN);

    printf("Source file: \"%s\", %d\n", __FILE__, __LINE__);
    printf("Compilation time: %s\n", __TIME__);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}