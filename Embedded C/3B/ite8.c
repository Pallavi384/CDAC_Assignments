#include<stdio.h>

int main()
{
long int bin;
int ones = 0, zeros = 0, r;

printf("Enter a binary number: ");
scanf("%ld",&bin);

while(bin > 0) // loop until number becomes 0
{
r = bin % 10; // get last digit

if(r == 1)
ones++; // count 1s
else if(r == 0)
zeros++; // count 0s

bin = bin / 10; // remove last digit
}

printf("Number of 1s = %d\n", ones);
printf("Number of 0s = %d\n", zeros);

return 0;
}
