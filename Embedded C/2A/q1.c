/* Q1: Impliment choice based arithmatic calculator (1.add,2.sub,3-mul,4-div etc,by implementing function.)*/

#include<stdio.h>  // pre processor directory

//
   int add(int num1, int num2) 
    {float result=num1+num2;} 
  int sub(int num1,int num2)
    { float result=num1-num2;}
  int mul(int num1,int num2)
    {float result=num1*num2;}
  int div(int num1,int num2)
  {float result=num1/num2;}
  
 
int main() // main function start
 {
  {	 
   int choice; // variabel declaration 
   int num1,num2;
   float result;

     printf("Enter two number:\n"); 
     scanf(" %d %d",&num1,&num2);
     printf("Enter the choice : 1.add\t2.sub\t3.mul\t4.div\n");
     printf("Enter choice :\n");
     scanf(" %d",&choice);
   switch(choice)
   {
	case 1: 
             { result=num1+num2;}
	     break;
        case 2:
	     {result=num1-num2;}
	     break;
	case 3:
	     {result=num1*num2;}
	     break;
	case 4:
	     {result=num2/num2;}
	     break;
         
	default :
	     {printf("You enterd wong choice .\n");}
	     break; 
   }
  

printf("result= %f\n",result);
  }
return 0;
}
