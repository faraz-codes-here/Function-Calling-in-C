#include<stdio.h>
void reverse(int);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    reverse(n);
    return 0;
}
void reverse(int n)
{
    int rev=0;
    while(n>0)
    {
        rev=(rev*10)+(n%10);
        n=n/10;
    }
    printf("REVERSE=%d",rev);
}