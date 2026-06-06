#include<stdio.h>
int main()
{
    int i , n , m , gcd=1;
    printf("Enter the n :");
    scanf("%d", &n);
    printf("Enter the m :");
    scanf("%d", &m);

    for(i=1 ; i<=n && i<=m ; i++)
    {
        if(n % i == 0 && m % i ==0)
        gcd = i ;
    }
    printf("GCD = %d", gcd);

    return 0;
}