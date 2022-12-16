#include <stdio.h>
#include <stdlib.h>

//get more types by importing stdint.h
#include <stdint.h> 

// Data type and Variables
// Integers
// Float Numbers
// Char
// String
// Array
// Bool
// Complex numbers
int main()
{
    // {Data Type | Identifier | Literal}
    int girl = 12;

    // int vs unsigned int (where value can not be negative)

    // short int > 2 bytes
    // int > 4 bytes
    // long int > 8 bytes
    // long long > greater than or equal to 8 bytes

    // Format Specifiers
    //Example 1
    int status = -1;
    printf("status value:\n");
    printf("%6d\n", status); //tab by 6 lines
    printf("123456\n");

    // Example 2
    unsigned students = 25U;
    unsigned long long worldPopulation = 78012355945U;

    printf("%12u | Students in the class\n", students);
    printf("%12llu | World population now\n", worldPopulation);

    // Example 3
    uint8_t count = UINT8_MAX;
    printf("%12u | Count of something\n", count);

    // Example 4
    count = count + 1;
    printf("%12u | Count of something + 1 (OVERFLOW)\n", count);

    // Example 5

    printf("%12d | INT32_MIN\n", INT32_MIN);
    printf("%12d | INT32_MAX\n", INT32_MAX);
    printf("%12u | UINT32_MAX\n", UINT32_MAX);

    // Hexadecimal Number

    uint8_t hexCount = 0xFF;
    printf("%12u | Hexadecimal to Integer\n", hexCount);


    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}