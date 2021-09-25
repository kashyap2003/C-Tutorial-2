#include <stdio.h>
#include <stdlib.h>

int max(int a, int b, int c)
{
    int result;

    if (a>b && a>c)
    {
        result = a;
    }
    else if (b>a && b>c)
    {
        result = b;
    }
    else
    {
        result = c;
    }
    
}

int main(void)
{
    int x = max(12,34,56);
    printf("%d", x);
}