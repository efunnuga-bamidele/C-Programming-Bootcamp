#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\n=== Planetart Alignment ===\n\n");

    int a, b, c;

    printf("Enter the duration of the orbit a in days: ");
    scanf("%d", &a);

    printf("Enter the duration of the orbit b in days: ");
    scanf("%d", &b);

    printf("Enter the duration of the orbit c in days: ");
    scanf("%d", &c);

    printf("\n a -> %5d [days]", a);
    printf("\n b -> %5d [days]", b);
    printf("\n c -> %5d [days]\n\n", c);

    int max;
    max = a > b ? a : b;
    max = c > max ? c : max;

    int lcm = -1;
    const int MAX_ITER = 10000;

    for (int i = 1; i < MAX_ITER; i++)
    {
        int mul = max * i;
        if (mul % a == 0 && mul % b == 0 && mul % c == 0)
        {
            lcm = mul;
            break;
        }
    }

    if (lcm == -1)
    {
        printf("Excedded the maximum number of iterations\n");
    }
    else
    {
        printf("orbits a, b, c aligns every %d days\n", lcm);
        printf("Planet a completes %d orbits\n", lcm / a);
        printf("Planet b completes %d orbits\n", lcm / b);
        printf("Planet c completes %d orbits\n", lcm / c);
    }

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}