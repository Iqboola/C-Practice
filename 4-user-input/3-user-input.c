#include <stdio.h>

int main()
{
    double number;
    char alphabet;

    printf("Enter input values: ");
    scanf("%lf %c", &number, &alphabet);


    printf("Number: %lf\n", number);
    printf("Character: %c", alphabet);

    return 0;
}