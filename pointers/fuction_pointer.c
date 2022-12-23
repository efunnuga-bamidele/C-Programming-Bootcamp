#include <stdio.h>
#include <stdlib.h>

int accumulate(int *accumulator, int value)
{
    if (value > 0)
    {
        *accumulator += value;
        return 0;
    }
    else 
    {
        return -1;
    }
}

int main()
{

    int class_1 = 28, class_2 = 19, class_3 = -1;

    int accumulator = 0;

    if (accumulate(&accumulator, class_1) == -1)
    {
        printf("Warning! Class_1!\n");
    }
    if (accumulate(&accumulator, class_2) == -1)
    {
        printf("Warning! Class_2!\n");
    }
    if (accumulate(&accumulator, class_3) == -1)
    {
        printf("Warning! Class_3!\n");
    }

    printf("Accumulator = %d\n", accumulator);


    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}