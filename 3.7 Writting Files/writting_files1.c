#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fpointer = fopen("employees.txt", "w");

    fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accountent");

    fclose(fpointer);
}