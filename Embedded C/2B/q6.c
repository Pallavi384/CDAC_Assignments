/* Q6 : find fibonacci series */

#include<stdio.h>  // pre processor directory
int main()    // main function start
{

int i,num;
int t1=0,t2=1;
int nextTerm;
 printf("Enter the number of terms :");
 scanf("%d",&num); //get input from user
 
 printf("Fibonacci Series :");
 
 for(i=1;i<=num;i++) //used for loop for geting fibonacci series
  {
    printf("%d, ",t1);
    nextTerm=t1+t2;
    t1=t2;
    t2=nextTerm;
  }
  return 0;
}  //end main function
