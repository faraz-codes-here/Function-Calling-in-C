#include<stdio.h>
int add(int,int);
int main()
{
    int a,b,sum;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    sum=add(a,b);
    printf("Sum=%d",sum);
    return 0;
}
int add(int a, int b)
{
    int c=a+b;
    return c;
}