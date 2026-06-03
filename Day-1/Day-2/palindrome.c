   #include<stdio.h>
     int main()
    {
    int n , rev=0 , temp , d;
    printf("Enter the n :");
    scanf("%d", &n);

    temp=n;

    while(n>0)
    {
      d = n%10;
      rev = rev*10+d;
      n = n/10;
    }

    if(rev==temp)
        ("Enter number is Palindrome");
    else
        ("Enter number is not palindrome");

    return 0;
}
     