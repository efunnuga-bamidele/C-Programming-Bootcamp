#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = NULL;

    // if (ptr != NULL)
    if (ptr)
    {
         printf(" 1 | Pointed value: %d\n", *ptr);
    }


    int someValue = 123;
    // Execute only if ptr is null
    if (!ptr)
    {
        ptr = &someValue;
    }

    if (ptr)
    {
         printf(" 2 | Pointed value: %d\n", *ptr);
    }

    
    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}