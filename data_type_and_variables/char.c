#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
        Char datatype use single quotes
        1 byte -> 8 bit signed int
        Range: -128 to +127
        Uses ASCII characters
    */

    char c = 'A';

    printf("char c (ASCII): %d\n", c);
    printf("char c: %c\n", c);

    // Example 2
    c = 66;
    printf("char c: %c\n", c);

    // Example 3
    // Acquire user input
    printf("Input a character: ");
    c = getchar();
    printf("You entered: %c\n", c);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}