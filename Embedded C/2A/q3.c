/* Q3 : */

#include<stdio.h> // pre processor directory
int main() // main function

{
int m1,m2,m3,total=0; // variable dicleration 
float percentage; // variable dicleration 
char grade;  // variable dicleration 

printf("Enter the marks:");
scanf( "%d %d %d",&m1,&m2,&m3);  // get input from user 
total=m1+m2+m3; // total marks formula
printf("total=%d",total);// get total number of marks
percentage= total/3 ; // percentage formula
printf("percentage=%f\n",percentage); // print percentage o
if(percentage>=90)  //condition for A+ grade
	printf("Grade=A+");
else if(percentage <= 90 && percentage >=80)  //condition for A grade
	printf("Grade=A");
else if(percentage <= 80 && percentage >= 70)  //condition for B grade
	printf("Grade=B");
else
	printf("Grade=C"); //else conditon



return 0;

}// end main function 
