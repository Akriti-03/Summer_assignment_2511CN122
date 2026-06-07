#include <stdio.h>

int main()
{
    int base , power , i;
    long result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter power: ");
    scanf("%d", &power);

    for(i = 1; i <= power; i++)
    {
        result = result * base;
    }

    printf("%d^%d = %ld", base, power, result);

    return 0;
}