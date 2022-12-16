#include <stdio.h>
#include <stdlib.h>

enum menu
{
    TEA, // 0
    COFFEE, // 1
    JUICE, // 2
    BEER, // 3
};

int main() 
{
    enum menu mario = COFFEE;
    enum menu andrea = BEER;

    printf("Mario ordered:    %d\n", mario);
    printf("Andrea ordered:    %d\n", andrea);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}