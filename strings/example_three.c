#include <stdio.h>
#include <stdlib.h>
#include <string.h> //to use string function

int main()
{
    printf("\n\n=== Strig Methods {Length, Copy, Compare} ===\n\n");

    // Receive user Input
    char input_str[10];
    printf("Enter a string of (9 characters): ");
    scanf("%s", &input_str);

    printf("%s\n", input_str);


    // String Length
    char my_string[] ="I love programming in C!";
    printf("The string: \"%s\"\n", my_string);

    int len;

    for (len = 0; my_string[len] != '\0'; len++);
    printf("String length (form scratch): %d\n", len);
    printf("Sizeof string: %d\n", sizeof(my_string));
    
    //String length: Built in Method 
    printf("String length (built-in): %lld\n", strlen(my_string));


    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}