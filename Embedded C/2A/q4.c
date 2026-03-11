/* Q4 : Implement  a C program to calculate GCD and LCM of 2 input */
#include <stdio.h>     //pre processor directory 
int main()  //main function 
{
int  a,b,num1,num2,temp,gcd,lcm; // variable dicleration 
printf("Enter two integer:");
scanf("%d %d",&num1,&num2);   //get inpput from user
a=num1;
b=num2;
while(b!=0)    //condition
  { 
	  temp=b;
          b=a%b;
	  a=temp;
  }
  
gcd=a;
lcm = (num1*num2)/gcd; // lcm formula 
printf("GCD of %d and %d is : %d\n",num1,num2,gcd);   //print out for gcd
printf("LCM of %d and %d is : %d\n",num1,num2,lcm);//print out for lcm
return 0;


}// end main function
 
