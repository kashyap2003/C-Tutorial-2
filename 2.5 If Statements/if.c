#include <stdio.h>
#include <stdlib.h>

int max(int a, int b)
{
    int result;

    if (a>b)
    {
        result = a;
    }
    else
    {
        result = b;
    }
    
    return result;
    
}

int main(void)
{
    int c = max(15,23);
    printf("%d", c);
}