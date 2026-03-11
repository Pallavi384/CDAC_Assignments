/* Q:10  list of prime number */
#include<stdio.h>    // pre processor directory 
int main()  // main function start
{
 int limit,num,i,prime;   //veriable declaration
 printf("Enter the limit to print prime number:");
 scanf( "%d",&limit);  //  get a limit from user 
 
 printf("Prime number up to %d are:\n",limit);
for (num=2; num<=limit; num++)
 { 
 prime=1;
      
   { 
     for(i=2; i<=num/2; i++)
       {
         if(num%i==0)
         {
         prime= 0;
         break;
         }
        }
      
    }
     if(prime == 1)
      {
        printf("%d",num);
      }
 }
 printf("\n");
 return 0;

}//end main function 
