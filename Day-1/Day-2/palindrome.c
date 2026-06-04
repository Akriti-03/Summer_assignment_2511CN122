#include<stdio.h>
int main()
{
   int n , d , rev=0 , temp ;
    printf("Enter the n :");
    scanf("%d", &n);

    temp=n;

        while(n>0)
    {
       d = n%10;
       rev = rev*10+d;
       n = n/10;
    }
     if(temp==rev)
     {
     printf("Number is palindrome");
     }
     else{
        printf("Number is not palindrome");
     }
     return 0;
    }