#include <stdio.h>

int armstrong(int n)
{
    int sum = 0, temp = n, rem;

    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }

    if (sum == temp)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (armstrong(n))
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}