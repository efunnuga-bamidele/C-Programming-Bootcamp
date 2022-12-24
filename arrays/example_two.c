#include <stdio.h>
#include <stdlib.h>

#define LEN 5

int main()
{
    printf("\n\n=== Initializing Arrays ===\n\n");

    int a[LEN];

    for (int i = 0; i < LEN; i++)
    {
        a[i]= 1;
    }


    int x[] = {1, 2, 3, 4, 5};

    int y[LEN] = {1, 2, 3};
    int z[LEN] = {0};


    int w[LEN] = {[1] = 1, [3] = 1};

    int q[LEN] = {[1] = 3, [LEN - 1] = 5};
    int t[10] = {[0] = 5, [LEN - 3] = 3, 2, 1};

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}