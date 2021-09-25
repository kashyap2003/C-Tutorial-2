#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char color[20];
    char puralNoun[20];
    char celebrity[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a pural noun: ");
    scanf("%s", puralNoun);
    printf("ENter a celebrity: ");
    scanf("%s", celebrity);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", puralNoun);
    printf("I love %s\n", celebrity);
}