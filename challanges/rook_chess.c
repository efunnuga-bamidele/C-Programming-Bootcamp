#include <stdio.h>
#include <stdlib.h>



void rook_move(char current_position[], char output_buffer[])
{
    const char cols[] = "abcdefgh";
    const char rows[] = "12345678";

    char curr_col = current_position[0];
    char curr_row = current_position[1];
    char *dst = output_buffer;

    for (const char *p = cols; *p != '\0'; p++ )
    {
        if (*p != curr_col)
        {
            *dst++ = *p;
            *dst++ = curr_row;
            *dst++ = ' ';
        }

    }

    for (const char *p = rows; *p != '\0'; p++ )
    {
        if (*p != curr_row)
        {
            *dst++ = curr_col;
            *dst++ = *p;
            *dst++ = ' ';
        }
        
    }

    *dst = '\0';

}

void rook_advance(char current_position[], char output_buffer[])
{
    const char cols[] = "abcdefgh";
    const char rows[] = "12345678";

    char curr_col = current_position[0];
    char curr_row = current_position[1];
    char *dst = output_buffer;

    for (const char *c = cols, *r = rows; *c || *r; *c ? c++ : r++)
    {
        if (*c != curr_col && *r != curr_row)
        {
        *dst++ = *c ? *c : curr_col;
        *dst++ = *c ? curr_row : *r;
        *dst++ = ' ';

        }

    }
    *dst = '\0';

}


int main()
{

    printf("\n\n=== Move The Rook! ===\n\n");
    
    char pos[] = "d5";
    char buffer[100];

    // rook_move(pos, buffer);
    rook_advance(pos, buffer);
    printf("Current position: %s\n", pos);
    printf("You can move to: %s\n\n", buffer);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}