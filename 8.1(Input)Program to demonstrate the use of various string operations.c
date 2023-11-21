//title of program
//Program to demonstrate the use of various string operations
#include<stdio.h>
//function heading
#include<string.h>
//function heading of string
void main()
{
//variable declaration
char str1[20],str2[20],str3[20];
int res;
//output statement 
printf("enter the string1:\n");
//input statement 
scanf("%s",str1);
//output statement 
printf("enter the string2:\n");
//input statement 
scanf("%s",str2);
//output statement 
printf("concatenation string is:%s",strcat(str1,str2));
//result
res=strcmp(str1,str2);
//output statement 
printf("compare string result is:%d\n",res);
//input statement 
//copying the string
strcpy(str3,str1);
//output statements
printf("first string is:%s\n",str1);
printf("third string is:%s\n",str3);
//output statements for printing lower case and upper case of strings
printf("\n third string lower case is:%s\n",strlwr(str3));
printf("\n third string upper case is:%s\n",strupr(str3));
}