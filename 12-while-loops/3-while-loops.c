#include <stdio.h>

int main()
{
    int count = 5;
    do
    {
        printf("%d\n", count);
        count = count + 1;
    }
    while (count < 5);

    return 0;
}