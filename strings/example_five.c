#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <errno.h>



int main()
{
    printf("\n\n=== Practice with numeric Conversion ===\n\n");
    
    char str[] = "123 0xFF 99 -100";
    char *pend, *pstart = str;

    while(true)
    {
        // long num = strtol(pstart, &pend, 10);
        long num = strtol(pstart, &pend, 0);

        printf("Converting: %s\n", pstart);
        printf("errno: %d %s\n", errno, errno == ERANGE ? "(ERANGE)" : "");
        printf("%s\n", pend == str ? "pend == str (ERR)" : "pnd != str (OK)");

        (errno || pend == str) ? printf("Conversion error!\n\n") : printf("Conversion: %ld\n\n", num);

        if (pend == pstart) 
        {
            break;
        }

        pstart = pend;

    }

    
    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}