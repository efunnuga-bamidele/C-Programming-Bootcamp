#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("\n\n=== Sigma Drawing ===\n\n");

    char symbol = 'X';
    int BASE_WIDTH = 10;
    int TIP_WIDTH = 5;

    for (int i = 0; i < BASE_WIDTH; i++)
    {
        printf("%c", symbol);
    }
    printf("\n");

    for (int i = 0; i < TIP_WIDTH; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        printf("%c\n", symbol);
    }

    for (int i = TIP_WIDTH; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        printf("%c\n", symbol);
    }

    for (int i = 0; i < BASE_WIDTH; i++)
    {
        printf("%c", symbol);
    }
    printf("\n");


    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}