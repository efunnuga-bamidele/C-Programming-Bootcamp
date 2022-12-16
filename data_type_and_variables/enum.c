#include <stdio.h>
#include <stdlib.h>

// enum menu
// {
    //Default assignment
    // TEA, // 0
    // COFFEE, // 1
    // JUICE, // 2
    // BEER, // 3
    //Custom Assignment
    // TEA = 10, // 10
    // COFFEE = 20, // 20
    // JUICE = 30, // 30
    // BEER = 40, // 40
    // TEA, // 0
    // COFFEE, // 1
    // JUICE = 100, // 100
    // BEER, // 101
// };

enum month
{
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC,

};

int main() 
{
    // enum menu mario = COFFEE;
    // enum menu andrea = BEER;
    // enum menu john = JUICE;

    // printf("Mario ordered:    %d\n", mario);
    // printf("Andrea ordered:    %d\n", andrea);
    // printf("John ordered:    %d\n", john);

    // Example 2

    enum month myFavouriteMonth = JUL;
    enum month myWorstMonth = NOV;

    printf("My favourite month is:  %d\n", myFavouriteMonth);
    printf("My worst month is:  %d\n", myWorstMonth);



    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}