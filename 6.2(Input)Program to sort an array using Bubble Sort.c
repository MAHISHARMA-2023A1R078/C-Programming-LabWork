//title of program
//Program to sort an array using Bubble Sort
#include<stdio.h>
//function heading
void main()
{
//variable(array) declaration
int arr[30],i,num,temp,j;
//output statement 
printf("enter the size of an array");
//input statement 
scanf("%d",&num);
//output statement 
printf("enter the values of an array");
//condition to sort an array
for(i=0;i<num;i++){
//input statement 
scanf("%d",&arr[i]);
}
for(i=0;i<num;i++){
//output statement
printf("%d",arr[i]);
}
for(i=0;i<num;i++){
for(j=0;j<num-i-1;j++){
if(arr[j]>arr[j+1]){
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
//output statement 
printf("print sorted elements are...");
for(i=0;i<num;i++){
//output statement 
printf("\n%d",arr[i]);
}
}