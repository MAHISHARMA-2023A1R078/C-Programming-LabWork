//title of program
//Program to search an element in an array using linear search.
#include<stdio.h>
//function heading
void main()
{
//variable(array) declaration
int arr[30];
//variable declaration
int num,ele,found=0,i;
//output statement 
printf("enter the number of elements");
//input statement 
scanf("%d",&num);
//output statement 
printf("enter the elements");
//condition for searching an array
for(i=0;i<num;i++){
//input statement  
scanf("%d",&arr[i]);
}
//output statement 
printf("enter the elements to search");
//input statement 
scanf("%d",&ele);
for(i=0;i<num;i++){
if(arr[i]==ele){
//output statement 
printf("element found at the index %d element:%d\n",i,ele);
found=1;
break;
}
}
if(!found){
//output statement 
printf("element not found in the array");
}
}