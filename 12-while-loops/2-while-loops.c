#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int count = 1;

    while (count <= 10)
    {
        int product = number * count;
        printf("%d*%d = %d\n", number, count, product);
        count = count + 1;
    }
    
    return 0;
}