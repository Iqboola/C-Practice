#include <stdio.h>

int main()
{
    double number;
    char alphabet;

    printf("Enter double input: ");
    scanf("%lf", &number);

    printf("Enter character input: ");
    scanf("\n%c", &alphabet);

    printf("Number: %lf\n", number);
    printf("Character: %c", alphabet);

    return 0;
}