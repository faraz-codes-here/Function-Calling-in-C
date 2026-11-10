#include<stdio.h>
int prime(void);
int main()
{
    int p=prime();
    printf("PRIME NUMBER",p);
    return 0;
}
int prime()
{
     int n;
    printf("Enter a number");
    scanf("%d",&n);
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    return n;
}