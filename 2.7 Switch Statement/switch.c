#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char grade = 'B';

    switch (grade)
    {
    case 'A':
        printf("You did Great!");
        break;
    case 'B':
        printf("You did alright!");
        break;
    case 'C':
        printf("You did poorly!");
        break;
    case 'D':
        printf("You did very bad!");
        break;
    case 'F':
        printf("You Fauled!");
        break;
    
    default:
        printf("Invalid Grade");
        break;
    }
}