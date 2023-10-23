#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    (number > 0) ? printf("The number is positive"):
    printf("The number is negative");
   
    return 0;
}