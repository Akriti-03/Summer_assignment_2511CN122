#include<stdio.h>
int main()
{
   int n , d , product=1;
    printf("Enter the n :");
    scanf("%d", &n);

    while(n>0)
    {
        d = n%10;
        product = product*d;
        n = n/10;
    }
    printf("product = %d", product);
        
    return 0;
}