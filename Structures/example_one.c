// #include <stdio.h>
// #include <stdlib.h>>
// #include <stdbool.h>

// int main()
// {
//     printf("\n\n=== ByteGarage ===\n\n");

//     printf("\n\n=== ByteGarage ===\n\n");
//     return EXIT_SUCCESS;
// }

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


double calc_distance(int dimensions, double a[dimensions], double b[dimensions])
{
     double square_distance = 0;
     for (int i = 0; i < dimensions; i++)
     {
        square_distance += pow(a[i]- b[i], 2);
     }

     return sqrt(square_distance);
     
}

int main()
{
    printf("\n\n=== Structure Data ===\n\n");

    char elon_name[] = "Elon Musk";
    bool elon_actve = true;
    int elon_dimensions = 3;
    double elon_pos[] = {1, 2, 3};

    char bill_name[] = "Bill Gates";
    bool bill_active = true;
    int bill_dimensions = 3;
    double bill_pos[] = {3, 2, 1};

    if (!elon_actve || !bill_active)
    {
        printf("%s isn't active!\n", !elon_actve ? elon_name : bill_name);
        return EXIT_FAILURE;
    }

    if (elon_dimensions != bill_dimensions)
    {
        printf("%s and %s are in different dimensions!\n", elon_name, bill_name);
        return EXIT_FAILURE;
    }

    printf("The distance between %s and %s is: %.1f\n", elon_name, bill_name, calc_distance(elon_dimensions, elon_pos, bill_pos));

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}