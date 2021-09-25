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
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter another number: ");
    scanf("%d", &y);

    int c = max(x, y);
    printf("%d is the largest number anong the two no. you inputed", c);

}