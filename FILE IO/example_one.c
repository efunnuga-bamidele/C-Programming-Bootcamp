#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("\n\n=== FILES I/O ===\n\n");
    
    FILE* fp = fopen("info.txt", "r");
    if(!fp)
    {
        perror("File opening failed");
        return EXIT_FAILURE;
    }
    int c;
    while ((c = fgetc(fp)) != EOF)
    {
        putchar(c);
    }

    if (ferror(fp))
    {
        puts("I/O error when reading");
    }
    else if (feof(fp))
    {
        puts("End of file reached successfully");
    }

    fclose(fp);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}