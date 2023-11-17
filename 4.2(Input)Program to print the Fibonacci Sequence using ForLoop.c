//title of program
//Program to print the Fibonacci Sequence using ForLoop
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int i,n,a=0,b=1,nextnumber;
//output statement 
printf("enter the number");
//input statement
scanf("%d",&n);
//output statement 
printf("Fibonacci Series");
//condition of ForLoop
for(i=1;i<=n;++i)
{
//output statement 
printf("%d\n",a);
nextnumber=a+b;
a=b;
b=nextnumber;
}
}