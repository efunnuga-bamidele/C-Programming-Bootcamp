#include <stdio.h>
#include <stdlib.h>

// function declaration
int sum(int a, int b);
void printStudents(int students);

int main ()
{
    int students, girls = 12, boys = 9;
    students = sum(girls, boys);

    printStudents(students);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}

int sum(int a, int b)
{
    int result = a + b;
    return result;
}

void printStudents(int students)
{
    printf("students = %d\n", students);
} 