#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student 
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;
    student1.age = 19;
    student1.gpa = 9.2;
    strcpy(student1.name, "Kashyap");
    strcpy(student1.major, "Shahare");

    struct Student student2;
    student2.age = 22;
    student2.gpa = 8.6;
    strcpy(student2.name, "Jim");
    strcpy(student2.major, "Mory");


    printf("%s %s\n", student1.name, student1.major);
    printf("%s %s\n", student2.name, student2.major);

    return 0;
}