#include<stdio.h>
int add(void);
int main()
{
    int sum=add();
    printf("Sum=%d",sum);
    return 0;
}
int add()
{
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}
