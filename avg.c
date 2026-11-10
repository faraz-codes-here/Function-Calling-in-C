#include<stdio.h>
void average(int,int,int,int,int);
int main()
{
    int a,b,c,d,e;
    printf("Enter five values");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    average(a,b,c,d,e);
    return 0;
}
void average(int a,int b,int c, int d, int e)
{
    float avg=(a+b+c+d+e)/5;
    printf("AVERAGE=%f",avg);
}