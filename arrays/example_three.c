#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main()
{
    printf("\n\n=== Size Of Arrays ===\n\n");

    int x[] = {1,2,3,4,5};

    printf("sizeof(x): %llu bytes\n", sizeof(x));
    printf("sizeof(x[0]): %llu bytes\n", sizeof(x[0]));
    printf("Array length: %llu\n\n", sizeof(x) / sizeof(x[0]));

    int8_t y[] = {1,2,3,4,5};
    printf("sizeof(y): %llu bytes\n", sizeof(y));
    printf("sizeof(y[0]): %llu bytes\n", sizeof(y[0]));
    printf("Array length: %llu\n\n", sizeof(y) / sizeof(y[0]));



    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}