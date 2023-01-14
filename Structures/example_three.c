#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define MAX_DIMENSIONS 3

/* Type def Declaration */
struct GuyStruct
{
    char *name;
    bool active;
    int dimensions;
    double pos[MAX_DIMENSIONS]; // Flexible Array Member

};
/* Typedef Declaration Anonymus Struct */
typedef struct
{
    char *name;
    bool active;
    int dimensions;
    double pos[MAX_DIMENSIONS]; // Flexible Array Member
} GuyAnonymous;

/* Typedef Declaration */
typedef struct Guy
{
    char *name;
    bool active;
    int dimensions;
    double pos[MAX_DIMENSIONS]; // Flexible Array Member
    struct Guy *friend;
} Guy;

/* Nested Struct Declaration */
typedef struct Motorcycle
{
    char *model;
    double speed;
    Guy owner;

} Motorcycle;
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

    // struct Guy elon, bill;
    Guy elon, bill;
    Motorcycle moto;
// nested Struct assignment
    moto.model = "honda";
    moto.speed = 300;
    moto.owner.name = "Andrea";

    elon.name = "Elon Musk";
    elon.active = true;
    elon.dimensions = 3;
    elon.pos[0] = 1;
    elon.pos[1] = 2;
    elon.pos[2] = 3;

    bill.name = "Bill Gates";
    bill.active= true;
    bill.dimensions = 3;
    bill.pos[0] = 3;
    bill.pos[1] = 2;
    bill.pos[2] = 1;

    if (!elon.active || !bill.active)
    {
        printf("%s isn't active!\n", !elon.active ? elon.name : bill.name);
        return EXIT_FAILURE;
    }

    if (elon.dimensions != bill.dimensions)
    {
        printf("%s and %s are in different dimensions!\n", elon.name, bill.name);
        return EXIT_FAILURE;
    }

    printf("The distance between %s and %s is: %.1f\n", elon.name, bill.name, calc_distance(elon.dimensions, elon.pos, bill.pos));

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}