#include<stdio.h>
int main()
{
   int n , d ,digit , count = 0 ;
    printf("Enter the n :");
    scanf("%d", &n);

    printf("Enter the digits :");
    scanf("%d", &digit);

    while(n>0)
    {
       d = n%10 ;
       
       if(d == digit)
       count++;

       n = n/10 ;
    }
    
    printf("The digit = %d ", &count);

    return 0;
   }