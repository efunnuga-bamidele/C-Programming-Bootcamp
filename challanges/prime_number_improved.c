#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


const int MAX = 1000;

void printLimitError() 
    {
        printf("Error: must be 2 < limit < MAX\n");
    }

bool isOutofBound(int limit)
    {

        return (limit < 2 || limit > MAX);
    }

bool isPrime(int value)
    {
        
        for (int i = 2; i < value; i++)
            {
                if (value % i == 0)
                {
                    return false;
                }
            }

        return true;
    }

int main()
{
    printf("\n\n=== Prime Numbers Improved ===\n\n");

    

    /* Find all prime numbers below upperLimit*/
    int upperLimit;
    printf("Enter the upper limit: ");
    scanf("%d", &upperLimit);

    if (isOutofBound(upperLimit))
    {
        printLimitError();
        return EXIT_FAILURE;
    }

    printf("Prime numbers up to %d: \n", upperLimit);

    for (int number = 2; number < upperLimit; number++)
    {
       if (isPrime(number))
       {
        printf("%d\n", number);
       }
    }

    /* Find the first prime number above lowerLimit */
    int lowerLimit;
    printf("Enter the lower limit: ");
    scanf("%d", &lowerLimit);
    
    if (isOutofBound(lowerLimit))
    {
        printLimitError();
        return EXIT_FAILURE;
    }

    int firstPrimeNumber = -1;

    for (int number = lowerLimit; number < MAX; number++)
    {
        if (isPrime(number))
            {
                firstPrimeNumber = number;
                break;
            }
    }

    if (firstPrimeNumber == -1)
    {
        printf("Cannot find prime numbers above %d\n", lowerLimit);
    }
    else
    {
        printf("The first prime number above %d is %d\n", lowerLimit, firstPrimeNumber);
    }

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}