#include <stdio.h>
#include <stdlib.h>

    // pointers
    // a vairable that stores an address of a data

int main()
{
    // Pointer declaration
    // int *ptr_1 = NULL;
    // int *ptr_1 = &data;
    // uint32_t *ptr_1 = (uint32_t *) &data;
    // uint32_t *ptr_1 = (uint32_t *) 0x100C;
    // char *ptr_2;
    // float *ptr_3;
    // void *pvPatameters;

    int apples = 12;
    int *ptr = &apples;
    void *ptr_1 = &apples;

    // Indirection to GET apples value
    int num_1 = *ptr;  // => num_1 = 12
    int num_2 = *ptr + 8;  // => num_2 = 20
    int num_3 = *((int *)ptr_1);
    
    // indirection to SET apples values
    *ptr = 99; // => apples = 99
    (*ptr)++;  // => apples = 100





    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}