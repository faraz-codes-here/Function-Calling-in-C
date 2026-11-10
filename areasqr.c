#include<stdio.h>
void area(int);
int main()
{
    int s;
    printf("Enter the side");
    scanf("%d",&s);
    area(s);
    return 0;
}
void area(int s)
{
    float area=s*s;
    printf("AREA OF SQUARE=%f",area);
}