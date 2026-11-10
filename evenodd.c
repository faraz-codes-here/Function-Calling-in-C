#include <stdio.h>
void evenodd(int);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    evenodd(n);
    return 0;
}
void evenodd(int n)
{
    if (n % 2 == 0)
        printf("EVEN NUMBER");
    else
        printf("ODD NUMBER");
}
