#include <stdio.h>

void calculateProduct(int number1, int number2)
{
    int product = number1 * number2;
    printf("Product of %d and %d = %d", number1, number2, product);
}

int main()
{
    calculateProduct(5, 9);

    return 0;
}