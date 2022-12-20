#include <stdio.h>
#include <stdlib.h>

typedef enum 
{
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
} WeekDays ;

int main()
{

    printf("\n\n=== WEEK DAYS ===\n\n");

    printf("Monday/Sunday: %d/%d\n", Monday, Sunday);

    // int userInput;
    WeekDays day;
    printf("Enter a day of the week: ");
    scanf("%d", &day);

    switch (day)
    {
        case Monday:
            printf("day %d is Monday\n", day);
            break;
        case Tuesday:
            printf("day %d is Tuesday\n", day);
            break;
        case Wednesday:
            printf("day %d is Wednesday\n", day);
            break;
        case Thursday:
            printf("day %d is Thursday\n", day);
            break;
        case Friday:
            printf("day %d is Friday\n", day);
            break;
        case Saturday:
            printf("day %d is Saturday\n", day);
            break;
        case Sunday:
            printf("day %d is Sunday\n", day);
            break;
        default:
            printf("day has unknown value.\n");
            break;
    }

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}