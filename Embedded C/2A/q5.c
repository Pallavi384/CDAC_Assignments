/* Q5 : Write a program for check given no is prime or not.*/
#include <stdio.h>    // pre processor directory
int main()  // main function

{
int num; 
printf("Enter number :");
scanf("%d",&num); // get input from user

if(num%2==1) // condition for prime number
 {
   printf(" It is a prime number.");
 }
else   // else condition

  {
   printf("It is a not prime number.");
  }
  
  
  return 0;
} // end main function 
