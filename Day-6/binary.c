#include <stdio.h>

int main()
{
    int binary, decimal = 0, base = 1, d;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0)
    {
        d = binary % 10; 
        decimal = decimal + d * base;
        base = base * 2;
        binary = binary / 10;
    }

    printf("Decimal number = %d", decimal);

    return 0;
}