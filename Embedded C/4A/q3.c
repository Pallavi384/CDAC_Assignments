/*Q3: Impliment a C program to differentiate between post, pre decrement operators,consider below mentio scenario.*
a)k=i++,k=++i
b)y=x++*10,y=++x*10
c)q=p--/3,q=--p/3 */

#include <stdio.h>  //pre processor directory

int main()    //main function
{
int i,k,y,p,q,x;
printf("Enter the value :");
scanf("%d %d %d %d %d %d",&i,&k,&y,&p,&q,&x);  //get value from user

k=i++;
k=++i;
y=x++*10;
y=++x*10;
q=p--/3;
q=--p/3;
printf("i=%d k=%d y=%d p=%d q=%d x=%d",i,k,y,p,q,x);// print the result
return 0;

} // end main function
