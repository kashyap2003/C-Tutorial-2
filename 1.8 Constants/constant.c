#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const int date = 23; //* You can't modify the date after this because it is an constant value now.
    printf("%d\n", date);
}