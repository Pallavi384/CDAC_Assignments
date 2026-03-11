/* Q2:Swapping of two no.s(with,without temporary, one line code with xor operation)*/

#include <stdio.h>    //pre processor directory
int main()  //main function
{

int a,b;
printf("Enter two number : ");
scanf("%d\t%d",&a,&b); // get input from user


a^=b;   //xor conditions for swaping two number
b^=a;
a^=b;

printf("After swapping result is : a=%d\tb=%d",a,b); //printing result
return 0;

} //end main function
