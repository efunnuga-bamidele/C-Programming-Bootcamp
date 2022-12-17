#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{

    printf("Truth Table\n");
    printf("------------------------------------\n");
    printf("| X | Y | X AND Y | X OR Y | NOT X |\n");
    printf("------------------------------------\n");

    bool x, y;

    x = 0;
    y = 0; 
    printf("| %d | %d |%5d    |%5d   |%4d   |\n", x, y, x && y, x || y, !x);

    x = 1;
    y = 0;
    printf("| %d | %d |%5d    |%5d   |%4d   |\n", x, y, x && y, x || y, !x);

    x = 0;
    y = 1;
    printf("| %d | %d |%5d    |%5d   |%4d   |\n", x, y, x && y, x || y, !x);

    x = 1;
    y = 1;
    printf("| %d | %d |%5d    |%5d   |%4d   |\n", x, y, x && y, x || y, !x);


    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}