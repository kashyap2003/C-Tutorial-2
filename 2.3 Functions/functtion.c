#include <stdio.h>
#include <stdlib.h>

void sayHi()
{
    printf("Hello User\n");
}

int main(void)
{
    printf("Top\n");
    sayHi();
    printf("Bottom\n");
}