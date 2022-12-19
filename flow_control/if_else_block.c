#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a = -1;

    // Example 1
    if (a)
    {
        printf("a != 0\n");
    }
    else
    {
        printf("a == 0\n");
    }

    if (!a)
    {
        printf("a == 0\n");
    }
    else
    {
        printf("a != 0\n");
    }

    // Example 2

    if (!a)
    {
        printf("a == 0\n");
    }
    else if (a < 0)
    {
        printf("a < 0\n");
    }
    else if (a > 0)
    {
        printf("a > 0\n");
    }

    // Example 3 ternary operator

    int b = 9;
    int c = 3;
    int d = b > c ? b : c;

    printf("The greater value is : %d\n", d);



    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}