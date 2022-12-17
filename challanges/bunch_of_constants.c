#include <stdio.h>
#include <stdlib.h>



int main()
{
    // Format Specifiers

    printf("\n\n=== Bunch of Constants ===\n\n");

    const int moonLanding = 1969;
    const double speedOfLight = 299792458.;
    const double pi = 3.142;
    const unsigned hexDead = 0xDEADU;
    const unsigned hexaSecret = 51966U;

    printf("Moon landing:\n %10d\n %010d\n\n", moonLanding, moonLanding); 
    printf("Speed of light:\n %.0f\n %.3e\n\n", speedOfLight, speedOfLight);
    printf("Pi: \n %.2f\n %+.1e\n\n", pi, pi);
    printf("Hexa dead:\n 0x%X\n %6u\n\n", hexDead, hexDead);
    printf("Hexa secret:\n %x\n\n", hexaSecret);



    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}