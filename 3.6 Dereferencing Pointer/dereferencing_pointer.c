#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int age = 19;
    int *pAge = &age;

    printf("%d\n", age);
    printf("%d\n", *&age);
    printf("%d\n", *pAge);
}