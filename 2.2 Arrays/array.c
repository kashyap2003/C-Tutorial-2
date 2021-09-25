#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int luckyNumbers[] = {4, 8, 15,16, 23, 42};
    printf("%d\n", luckyNumbers[2]);
    luckyNumbers[2] = 802;
    printf("%d", luckyNumbers[2]);
}