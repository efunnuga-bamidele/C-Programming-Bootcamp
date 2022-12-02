#include <stdio.h>
#include <stdlib.h>

int main()
{
    int girls = 12;
    int boys = 9;
    int students = girls + boys;

    printf("In the classroom, there are:\n");
    printf("\t%d girls\n", girls);
    printf("\t%d boys\n", boys);
    printf("Giving the total of %d students", students);

    return EXIT_SUCCESS;
}