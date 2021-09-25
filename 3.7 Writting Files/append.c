#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fpointer = fopen("employees.txt", "a");

    fprintf(fpointer, "\nKelly, Customer Service");

    fclose(fpointer);
}