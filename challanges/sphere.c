#include <stdio.h>
#include <stdlib.h>


int main()
{

    printf("\n\n=== Sphere ===\n\n");

    double radius = 0.0;
    const double pi = 3.14159265359;

    // Formula Surface Area A=4πr2
    // Volume  V = 4/3.πr2

    printf("Enter the radius of the sphere:  ");
    scanf("%lf", &radius);
    printf("\n");
    double area = 4 * pi * radius * radius;
    double volume = 4.0 / 3.0 * pi * radius * radius * radius;

    printf("Decimal:\n");
    printf("The radius : %.2f\n", radius);
    printf("The Surface Area : %.2f\n", area);
    printf("The Volume : %.2f\n", volume);
    printf("\n");

    printf("Scientific Notation: \n");
    printf("The radius : %.3e\n", radius);
    printf("The Surface Area : %.3e\n", area);
    printf("The Volume : %.3e\n", volume);
    printf("\n");



    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}