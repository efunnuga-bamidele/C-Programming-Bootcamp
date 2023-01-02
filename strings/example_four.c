#include <stdio.h>
#include <stdlib.h>
#include <string.h> //to use string function

int find_all_occurances(char str[], char c, int indexes[])
{
    int found = 0;
    char *pstr = str;

    do
    {
        pstr = strchr(pstr, c);
        if (pstr)
        {
            indexes[found] = pstr - str;
            found++;
            pstr++;
        }
    } while (pstr);

    return found;
}

void print_occurances(char str[], int occurances_index[], int found)
{
    char pattern[strlen(str) + 1];
    memset(pattern, ' ', sizeof(pattern));
    for (int i= 0; i < found; i++)
    {
        pattern[occurances_index[i]] = '^';
    }
    pattern[sizeof(pattern) - 1] = '\0'; //assigning the null character to the end of the pattern
    printf("%s\n", str);
    printf("%s\n", pattern);
}

int main()
{

    printf("\n\n=== String Search and Tokenization ===\n\n");   

    char str[] = "This is a sample string";
    int occurances_indexes[sizeof(str)];
    int found = find_all_occurances(str, 'i', occurances_indexes);

    print_occurances(str, occurances_indexes, found);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}