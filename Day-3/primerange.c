#include<stdio.h>
int main()
{
    int i, j,n, start, end, count;
    printf("Enter the starting number:");
    scanf("%d", &start);
    printf("Enter the ending number:");
    scanf("%d", &end);

    for(n = start ; n<=end ; n++)
    {
        count = 0 ;
        for(i=1 ; i <=n ; i++)
        {
            if(n%i == 0)
            count++;
        }
    if(count == 2)
    printf("%d", n);
    }

    return 0;
}

