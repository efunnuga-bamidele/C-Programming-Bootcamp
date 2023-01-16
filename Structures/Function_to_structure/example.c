#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

#define MAX_DIMENSIONS 3

/* Type def Declaration */
typedef struct Guy
{
    char *name;
    bool active;
    int dimensions;
    double pos[MAX_DIMENSIONS]; // Flexible Array Member
    struct Guy *friend;
} Guy;

Guy create_bill(){
    return (Guy) {
        .name = "Bill Gates",
        .pos = {1, 2, 3},
        .dimensions = 3,
        .active = true,

    };
}

Guy create_elon(){
    return (Guy) {
        .name = "Elon Musk",
        .pos = {3, 2, 1},
        .dimensions = 3,
        .active = true,
    };
}

Guy *alloc_elon(){
    Guy *elon = malloc(sizeof(Guy));

    if (!elon) 
    {
        return NULL;
    }
    elon->name = "Elon Musk";
    elon->active = true;
    elon->dimensions = 3;
    // elon->pos[0] = 1;
    double pos[] = {3, 2, 1};
    memcpy(elon->pos, pos, sizeof(pos));
    elon->friend = NULL;

    return elon;
}

int main(){
    printf("\n\n=== Structure and Functions ===\n\n");

    Guy bill = create_bill();
    // Guy elon = create_elon();
    bill.friend = alloc_elon();


    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}