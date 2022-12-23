#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main()
{
    char a = 'A';
    char *ptr = &a;

    printf("1.The Variable: %c, 2.The Pointer Variable: %c, 3.The Pointer Address: %llu\n", a, *ptr, (uint64_t) ptr);

    char b = 'B';
    ptr = &b;

    printf("1.The Variable: %c, 2.The Pointer Variable: %c, 3.The Pointer Address: %llu\n", b, *ptr, (uint64_t) ptr);

    *ptr = 'C';

    printf("1.The Variable: %c, 2.The Pointer Variable: %c, 3.The Pointer Address: %llu\n", b, *ptr, (uint64_t) ptr);

    (*ptr)++;
    printf("1.The Variable: %c, 2.The Pointer Variable: %c, 3.The Pointer Address: %llu\n", b, *ptr, (uint64_t) ptr);

    unsigned x = 'A';
    ptr = (char *) &x;
     printf("1.The Variable: %u, 2.The Pointer Variable: %c, 3.The Pointer Address: %llu\n", x, *ptr, (uint64_t) ptr);

    unsigned y = 'B';
    ptr = (char *) &y;
    printf("1.The Variable: %c, 2.The Pointer Variable: %c, 3.The Pointer Address: %llu\n", y, *ptr, (uint64_t) ptr);

    *ptr = 'C';
    printf("1.The Variable: %c, 2.The Pointer Variable: %c, 3.The Pointer Address: %llu\n", y, *ptr, (uint64_t) ptr);

    (*ptr)++;
    printf("1.The Variable: %c, 2.The Pointer Variable: %c, 3.The Pointer Address: %llu\n", y, *ptr, (uint64_t) ptr);

    x = 0xABCD1234;
    ptr = (char *) &x;
    printf("1.The Variable: %X, 2.The Pointer Value: %X, 3.The Pointer ASII  Character: %c\n", x, *ptr, *ptr);

    *ptr = 'C';
    printf("1.The Variable: %X, 2.The Pointer Value: %X, 3.The Pointer ASII  Character: %c\n", x, *ptr, *ptr);


    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}