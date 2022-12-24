#include <stdlib.h>
#include <stdio.h>


void swap(int *const p1, int *const p2)
{
    int temp;
    temp = *p2;
    *p2 = *p1;
    *p1 = temp;
}

int main()
{
    int apples = 12;
    int pears = 34;


    printf("Before swapping : apples = %d, pears = %d\n", apples, pears);

    int *papples = &apples;
    int *ppears = &pears;

    swap(papples, ppears);

    printf("After swapping : apples = %d, pears = %d\n", apples, pears);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}