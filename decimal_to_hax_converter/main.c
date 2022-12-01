#include <stdio.h>

int main (void) {
    printf("===^^===\n");
    printf("Welcome to the Decimal to hexadecimal Converter~\n");
    printf("Enter a number: \n");

    int  userInput;  //declared an integer variable
    
    scanf("%d", &userInput); //reading users input and store it in a variable

    printf("Decimal representation: %9d\n", userInput); //The number 9 represents 9 line spacing before number
    printf("Converted to hexadecimal: %9X\n"); //The %X is used to convert integer to hexadecimal.

    printf("===^^===\n");
    return 0;
}