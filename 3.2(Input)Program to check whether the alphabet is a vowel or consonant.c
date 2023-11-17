//Title of program
//Program to check whether the alphabet is a vowel or consonant
#include<stdio.h>
//function heading
void main()
{
//character declaration
char ch;
//output statement
printf("enter the char");
//input statement
scanf("%c",&ch);
//condition of If...else
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
//output statement
printf("vowel");
}
//condition of If...else
else
{
//output statement 
printf("consonant");
}
}