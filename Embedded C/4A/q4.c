/* Q4 : Implement a C program to find out biggest of 3 no's using conditional operator.*/

#include<stdio.h>  //pre processor directory

int main()  // main function

{

int a,b,c;
printf("Enter three numbers:");
scanf("%d %d %d ",&a,&b,&c);

int BiggestNumber= (a>b)?((a>c)?a:c):((b>c)?b:c);
return 0;


}


