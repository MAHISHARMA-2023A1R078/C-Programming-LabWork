//title of progam
//Program to calculate sum of digits of a number using a while loop
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int number,sum=0,digit;
//output statement
printf("enter a number");
//input statement 
scanf("%d",&number);
//calculate sum of digits using a while loop
while(number!=0)
{
digit=number%10;
sum+=digit;
number/=10;
}
//output statement 
printf("sum of digits:%d\n",sum);
}