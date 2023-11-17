//Title of program
//Program to calculate area and perimeter of circle,square and rectangle by using switch case
#include<stdio.h>
//function heading
void main()
{
//input statement to find
float area1,peri1,area2,peri2,area3,peri3;
//variable declaration
int ch;
//output statement for circle,square and rectangle
printf("1.circle\n 2.square\n 3.rectangle\n Enter your choice");
//input statement
scanf("%d",&ch);
//variable declaration 
float r,s,l,b;
//condition of switch case 
switch(ch)
{
case 1:
//output statement for circle
printf("enter the radius");
//input statement for circle
scanf("%f",&r);
//formula used for circle
area1=3.14*r*r;
peri1=2*3.14*r;
//output statement for circle
printf("area of circle=%f\n",area1);
printf("perimeter of circle=%f\n",peri1);
//condition of switch case 
break;
case 2:
//output statement for square
printf("Enter the side");
//input statement for square
scanf("%f",&s);
//formula used for square
area2=s*s;
peri2=4*s;
//output statement for square
printf("area of square=%f\n",area2);
printf("perimeter of square=%f\n",peri2);
//condition of switch case 
break;
case 3:
//output statement for rectangle
printf("enter the length and breadth");
//input statement for rectangle
scanf("%f%f",&l,&b);
//formula used for rectangle
area3=l*b;
peri3=2*(l+b);
//output statement for rectangle
printf("area of rectangle=%f\n",area3);
printf("perimeter of rectangle=%f\n",peri3);
//condition of switch case
break;
//condition of switch case 
default:
//output statement for default
printf("Zero");
}
}
