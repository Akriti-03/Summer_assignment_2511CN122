#include<stdio.h>
int main()
{
    int i , multiplication=1, n ;
    printf(" Enter the number :");
    scanf(" %d ", &n);

    for(i=1 ; i<=10 ; i++)
    {
      multiplication  = n*i;

     printf("\n %d*%d=%d", n , i, n*i);
    }

    return 0;
}