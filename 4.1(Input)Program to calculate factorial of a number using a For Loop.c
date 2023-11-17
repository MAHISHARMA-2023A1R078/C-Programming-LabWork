//Title of Program 
//Program to calculate factorial of a number using a for loop.
#include<stdio.h>
//function heading
void main()
{
//variable declaration 
int number,i;
//use unsigned long long to store large factorial values.
unsigned long long factorial=1;
//output statement 
printf("enter a positive integer");
//input statement
scanf("%d",&number);
//check if the input number is negative.
if(number<0)
{
//output statement
printf("Error:Factorial is not defined for negative numbers\n");
}
//else condition when the number is positive
else
{
//calculate factorial using a for loop
for(i=1;i<=number;++i)
{
//multiply factorial by the current number
factorial*=i;
}
//output for factorial 
printf("factorial of %d=%llu\n",number,factorial);
}
}
