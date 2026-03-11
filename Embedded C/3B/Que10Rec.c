#include<stdio.h>

int countDigit(int n)
{
    if(n==0)
        return 0;

    return 1 + countDigit(n/10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    printf("Number of digits = %d", countDigit(num));

    return 0;
}
