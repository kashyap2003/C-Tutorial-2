#include <stdio.h>
#include <stdlib.h>

double cube(double num);

int main(void)
{
    printf("Answer: %f", cube(4.21));
}  

double cube(double num)
{
    double result = num * num * num;
    return result;
}