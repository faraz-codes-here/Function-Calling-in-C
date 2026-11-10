#include<stdio.h>
void Prime(int);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    Prime(n);
    return 0;
}
void Prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    printf("PRIME NUMBER");
    else
    printf("NOT PRIME NUMBER");
}