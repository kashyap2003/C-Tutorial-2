#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int age = 19;
    double gpa = 9.2;
    char grade = 'A';

    // %p refer to the memory address.
    printf("age: %p\n", &age);
    printf("gpa: %p\n", &gpa);
    printf("grade: %p\n", &grade);
}