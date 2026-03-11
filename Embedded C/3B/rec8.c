#include<stdio.h>

int ones = 0, zeros = 0;

void count(int n)
{
if(n == 0) // base condition
return;

if(n % 10 == 1)
ones++; // count 1
else
zeros++; // count 0

count(n / 10); // recursive call
}

int main()
{
int bin;

printf("Enter binary number: ");
scanf("%d",&bin);

count(bin);

printf("Number of 1s = %d\n", ones);
printf("Number of 0s = %d\n", zeros);

return 0;
}
