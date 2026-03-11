#include<stdio.h>

int main()
{
int num, n;

int binary[50], octal[50];
int i = 0, j = 0;

printf("Enter a decimal number: ");
scanf("%d",&num);

n = num; // store original number

// Decimal to Binary conversion
while(n > 0)
{
binary[i] = n % 2; // get remainder
n = n / 2; // divide number by 2
i++;
}

printf("Binary number: ");
for(int k = i-1; k >= 0; k--) // print in reverse order
{
printf("%d", binary[k]);
}

n = num; // again take original number

// Decimal to Octal conversion
while(n > 0)
{
octal[j] = n % 8; // get remainder
n = n / 8; // divide number by 8
j++;
}

printf("\nOctal number: ");
for(int k = j-1; k >= 0; k--) // print in reverse order
{
printf("%d", octal[k]);
}

return 0;
}
