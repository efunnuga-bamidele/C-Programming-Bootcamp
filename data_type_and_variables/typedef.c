#include <stdio.h>
#include <stdlib.h>


typedef enum 
{
    // Default assignment
    TEA, // 0
    COFFEE, // 1
    JUICE, // 2
    BEER, // 3
} Menu ;


int main()
{

    Menu mario = COFFEE;
    Menu andrea = BEER;
    Menu john = JUICE;

    printf("Mario ordered:    %d\n", mario);
    printf("Andrea ordered:    %d\n", andrea);
    printf("John ordered:    %d\n", john);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}