#include <stdio.h>
#include <stdlib.h>

#define LEN 5

void array_maker(int len)
{
    int vla[len];

    for (int i = 0; i < len; i++)
    {
        vla[i] = i;
    }

    for (int j = 0; j < len; j++)
    {
        printf("%d, ", vla[j]);
    }
}

int main()
{
    printf("\n\n=== Variable Length Arrays ===\n\n");

    int a[LEN] = {1, 2, 3};

    for (int i = 0; i < LEN; i++)
    {
        printf("%d, ", a[i]);
    }

    while (1)
    {
        int len;
        printf("Enter the len: ");
        scanf("%d", &len);

        if (len < 1)
        {
            break;
        }

        array_maker(len);
    }


    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}