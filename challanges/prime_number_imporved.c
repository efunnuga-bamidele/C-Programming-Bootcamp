#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>

#define MIN_UPPER_LIMIT 3
#define MAX_UPPER_LIMIT 1000000
#define PRIME_FOUND_LEN 100000
#define PRINTABLE_LIMIT 50

// Check if number is a prime simplified
bool is_prime_simple(int num)
{
    const int limit = sqrt(num);
    for (int i = 2; i <= limit; i++)
    {
        if (num % i == 0)
        {
            /* num is evenly divided by i ---> Not a prime number*/
            return false;
        }
    }
    /*PRIME!*/
    return true;
}

// Check if number is a prime optimized
bool is_prime_optimized(int num, int prime_numbers[], int found)
{
    const int limit = sqrt(num);
    for (int i = 0; i < found && prime_numbers[i] <= limit; i++)
    {
        if (num % prime_numbers[i] == 0)
        {
            /* num is evenly divided by prime_numbers[i] ---> Not a prime number*/
            return false; 
        }
    }
    /*PRIME!*/
    return true;
}


bool is_prime(int num, bool optimized, int prime_numbers[], int found)
{
    return optimized ? is_prime_optimized(num, prime_numbers, found) : is_prime_simple(num);
}


int get_prime_numbers(int upper_limit, int prime_numbers[], bool optimized)
{
    int found = 0;
    for (int num = 2; num < upper_limit; num++)
    {
        if (is_prime(num, optimized, prime_numbers, found))
        {
            prime_numbers[found] = num;
            found++;
        }
    }
    return found;
}

void print_numbers(int numbers[], int len)
{
    printf("Found %d prime numbers.\n", len);
    for (int i = 0; i < len && i < PRINTABLE_LIMIT; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}

double elapsed_time_sec(clock_t start, clock_t end)
{
    return (end - start) / (double)CLOCKS_PER_SEC;
}

int main()
{

    printf("\n\n=== Prime Number Improved Challange ===\n\n");

    int upper_limit; 
    printf("Enter an upper limit (min %d, max %d): ", MIN_UPPER_LIMIT, MAX_UPPER_LIMIT);
    scanf("%d", &upper_limit);
    if (upper_limit < MIN_UPPER_LIMIT || upper_limit > MAX_UPPER_LIMIT)
    {
        printf("Out of bounds!\n");
        return EXIT_FAILURE;
    }

    int found, prime_numbers[PRIME_FOUND_LEN];
    clock_t start_clk, end_clk;


    start_clk = clock(); //get the numbers of clock ticks
    found = get_prime_numbers(upper_limit, prime_numbers, false);
    end_clk = clock();
    printf("\nSimple version elapsed time: %.6f [ms]\n", elapsed_time_sec(start_clk, end_clk) * 1e3);
    print_numbers(prime_numbers, found);



    start_clk = clock();
    found = get_prime_numbers(upper_limit, prime_numbers, true);
    end_clk = clock();
    printf("\nOptimized version elapsed time: %.6f [ms]\n", elapsed_time_sec(start_clk, end_clk) * 1e3);
    print_numbers(prime_numbers, found);





    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}