#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float b;
    char op;

    printf("Enter a number: ");
    scanf("%f", &a);
    printf("Enter operator: ");
    scanf(" %c", &op); //* We always have to put space befor %c to tell that it is taking an character.
    printf("Enter a number: ");
    scanf("%f", &b);

    if (op == '+')
    {
        
        printf("%f", a+b);
    }
    else if (op == '-')
    {
        printf("%f", a-b);
    }
    else if (op == '/')
    {
        printf("%f", a/b);
    }
    else if (op == '*')
    {
        printf("%f", a*b);
    }
    else 
    {
        printf("Invalid Syntax");
    }

    return 0;

}