//title of program
//Program to find the maximum element and index in the array
#include<stdio.h>
//function heading
void main()
{
//varible, array declaration
int arr[120];
int n=0,i=0,max=0,index;
//output statement 
printf("enter the number of elements of the array");
//input statement 
scanf("%d",&n);
//condition of ForLoop
for(i=0;i<n;i++)
{
printf("arr[%d]=",i);
scanf("%d",&arr[i]);
}
max=arr[0];
//condition to find the maximum element and index in the array
for(i=1;i<n;i++)
{
(arr[i]>max);
max=arr[i];
index=i;
}
//output statement 
printf("maximum element in the array:%d\n",max);
//output statement 
printf("index in the array:%d\n",index);
}
