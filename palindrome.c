#include<stdio.h>
void main()
{
    int n,digit,original;
    int rev=0;
    original=n;
    printf("Enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        digit=n%10;
        rev=(rev*10)+digit;
        n=n/10;
    }
    printf("reverse=%d",rev);
    if (original==rev)
    printf("palindrome");
}