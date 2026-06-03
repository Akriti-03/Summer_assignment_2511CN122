#include <stdio.h>
int main()
{
    int d , n , product = 1 ;
    printf("Enter the number : ");
    scanf("%d", &n);

    while(n>0)
    {
        d = n%10 ;
        product = product*d ;
        n = n/10 ;
    }

    printf("\n Product of digits = %d", product);
    
    return 0;
}