#include<stdio.h>

int power(int b, int p)
{
    if(p==0)
        return 1;

    return b * power(b, p-1);
}

int main()
{
    int base, pow;

    printf("Enter base: ");
    scanf("%d",&base);

    printf("Enter power: ");
    scanf("%d",&pow);

    printf("Result = %d", power(base,pow));

    return 0;
}
