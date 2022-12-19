#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("\n\n=== Bit Selector ===\n\n");
    
    unsigned data = 0xABCD;
    unsigned N = 12;
    unsigned M = 15;

    /**
     * W: width of bitmask in bits
     *      bitmask = 2^W -1
     * 
     * [0:1] --> W = 2 bits
     * [0:2] --> W = 3 bits
     * [N:M] --> W = M - N + 1
     * 
     * 2^W = 1 << W
     * 
     *      bitmask = 2^W - 1 = (1 << W) - 1
    */

    unsigned W = M - N + 1;
    unsigned bitmask = (1 << W) - 1;
    // unsigned result = data >> N;
    unsigned result = (data >> N) & bitmask;
    printf("data ----> 0x%04X\n", data);
    printf("result --> 0x%04X\n", result);
    
    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}