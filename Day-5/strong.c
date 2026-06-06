#include<stdio.h>
int main()
{
    int n , temp , sum=0 , rem, fact, i ;

    printf("Enter n : ");
    scanf("%d", &n);

    temp=n;

    while(temp>0)
    {
        rem = temp % 10 ;
        fact = 1;

        for (i=1 ; i<=rem ; i++)
        fact = fact*i;

        sum = sum + fact ; 
        temp = n/10;

    }
    if(sum == n)
      printf("Strong number");
      else
      printf("Not a strong number");

      return 0;

}