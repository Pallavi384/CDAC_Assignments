/* Q7:  find give no is astrong or not*/
#include <stdio.h> // pre processor directory
#include <math.h>  // pre processor directory

int main() // main function 
{
  int num,orignalNum,reminder,result=0;
  
  printf("Enter three digit number:");
  scanf("%d",&num);    // get input from user 
  orignalNum=num;

  while(orignalNum != 0)
 {
  reminder= orignalNum % 10;
  result += reminder*reminder*reminder;
   orignalNum /= 10;
  }
  if (result==num)
  printf("%d is  an Armstong number.\n",num);
  else
  printf("%d is not an Armstong number.\n",num);
  
  return 0;
}//end main function
