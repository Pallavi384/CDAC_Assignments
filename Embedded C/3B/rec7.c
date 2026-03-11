#include<stdio.h>

// function for decimal to binary using recursion
void binary(int n)
{
if(n == 0)
return;

binary(n/2); // recursive call
printf("%d", n%2); // print remainder
}

// function for decimal to octal using recursion
void octal(int n)
{
if(n == 0)
return;

octal(n/8); // recursive call
printf("%d", n%8); // print remainder
}

int main()
{
int num;

printf("Enter a decimal number: ");
scanf("%d",&num);

printf("Binary number: ");
binary(num); // call binary function

printf("\nOctal number: ");
octal(num); // call octal function

return 0;
}
