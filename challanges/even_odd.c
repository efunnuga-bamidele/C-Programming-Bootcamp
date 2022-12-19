#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("\n\n=== Even or Odd ===\n\n");

    int userInput;
    printf("Enter a positive integer number: ");
    scanf("%d", &userInput);

    if (userInput < 0)
    {
        printf("You have entered a negative number!\n");
        return EXIT_FAILURE;
    }
    else
    {
        (userInput % 2 == 0) ? printf("The number enterd is an even number\n") : printf("The number entered is an odd number\n");
    }
    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}