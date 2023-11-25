//title of program
//Program to calculate factorial of a number using recursion
#include<stdio.h>
//function heading
//function(variable) declaration
int fact1(int);
void main(){
//variable declaration
int a,fact;
//output statement 
printf("\n enter the number:");
//input statement 
scanf("%d",&a);
fact=fact1(a);
//output statement 
printf("factorial of %d is:%d",a,fact);
}
int fact1(int x){
if(x<=0)
return 1;
else
return x*fact1(x-1);
}