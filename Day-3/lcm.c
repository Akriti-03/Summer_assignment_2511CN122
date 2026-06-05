#include<stdio.h>
int main()
{
    int i , n , m , lcm , gcd=1 ;
    printf("Enter the n :");
    scanf("%d", &n);
    printf("Enter the m :");
    scanf("%d", &m);

    for(i=1 ; i<=m && i<=n ; i++)
    {
      if(m%i == 0 && n%i == 0)
      gcd = 1;  
    }
    lcm = (m*n)/gcd ;
    printf("LCM = %d", lcm);
    return 0;
}
