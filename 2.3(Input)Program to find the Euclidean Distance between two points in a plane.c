//Title of program
//Program to find distance between two points
#include<stdio.h>
//function heading
#include<math.h>
//header file to perform mathematical operations
void main()
{
//variable declaration
int x1,x2,y1,y2;
//output statement 
printf("enter the value");
//input statement 
scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
//input statement to find
int distance;
//formula used for calculating distance
distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
//output statement for calculating distance between two points
printf("distance between two points=%d\n",distance);
}
