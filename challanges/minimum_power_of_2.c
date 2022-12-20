#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("\n\n=== Minimum Power Of 2 ===\n\n");

    int userInput, result;

    do
    {
        printf("Enter a number (-1 to exit): ");
        scanf("%d", &userInput);

        if (userInput > 0)
        {
            result = 1;
            while (result < userInput)
            {
                result *= 2;
            }
            printf("Minimum power of 2 greater than %d: %d\n", userInput, result);

        }
    } while (userInput != -1);
    

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}