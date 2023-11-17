//title of program
//Program to check if a number is Armstrong or not using a While Loop.
#include<stdio.h>
//function heading
#include<math.h>
//header file to perform mathematical operations
void main()
{
//variable declaration
int number,originalnumber,remainder,result=0,n=0;
//output statement 
printf("enter an integer");
//input statement 
scanf("%d",&number);
originalnumber=number;
//count the number of digits
while(originalnumber!=0)
{
originalnumber/=10;
++n;
}
originalnumber=number;
//calculate the Armstrong number
while(originalnumber!=0)
{
remainder=originalnumber%10;
result+=pow(remainder,n);
originalnumber/=10;
}
//check if the number is Armstrong or not
if(result==number)
{
//output statement 
printf("%d is an armstrong number\n",number);
}
else
{
//output statement 
printf("%d is not an armstrong number\n",number);
}
}
