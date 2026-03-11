/* Q8:  check given number is perfect or not */
#include <stdio.h>   // pre processor directory  
int main()   // main function start 
{
   
int num,sum=0;
printf("Enter a number to check:");
scanf("%d",&num);
for (int i=1;i<=num/2;i++) // loop 
  {
   if (num%i==0)
   {
    sum=sum+i;
   
   }

  }


if(sum==num&&num>0) // if condtion is used for checking given nu is perfect or not

  {
    printf("%d is a perfect number.\n",num);
  }
   else
   {
     printf("%d is NOT a perfect number.\n",num);
   }
   return 0;
}// end main function
