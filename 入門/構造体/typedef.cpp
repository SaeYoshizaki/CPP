#include <stdio.h>

typedef struct
{
    int year;
    char name[32];
    double height;
    double weight;
}Student;

int main(void)
{
    Student Tom = {10, "Tom", 50, 170};
}
