//title of program
//Program to check if a number is prime or not using a While Loop
#include <stdio.h>
//function heading
void main()
{
//variable declaration
int n, i, count = 0;
//output statement 
printf("Enter the number");
//input statement 
scanf("%d",&n);
i=2;
//condition of while loop
while( i<=n/2)
{
// check if number is not prime
if(n%i==0)
{
count=1;
break;
}
i++;
} 
if (count==0)
//output statement 
printf("%d is a prime number.",n);
else
//output  statement 
printf("%d is not a prime number.",n);
}

    
