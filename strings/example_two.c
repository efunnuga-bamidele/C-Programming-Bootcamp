#include <stdio.h>
#include <stdlib.h>

int main()

{
    printf("\n\n=== Array of Strings ===\n\n");
    //Array of Strings

    // Method One using two dimensional array
    char days[][10] = {
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday",
    };

    // Method Two using pointers and one dimensional array
    
    char *days_pointer[] = {
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday",
    };
    printf("\n\n=== Using Two Dimensional Array ===\n\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%s\n", days[i]);
    }

    printf("\n\n=== Using Pointers ===\n\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%s\n", days_pointer[i]);
    }

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}