//title of program
//Program to check whether a given string is a palindrome
#include<stdio.h>
//function heading
#include<string.h>
//function heading of string
void print(char str[])
{
//variable declaration
int len=strlen(str);
//output statement 
printf("given string:");
for(int i=len-1;i>=0;i--){
//output statement 
printf("%c",str[i]);
}
//output statement 
printf("%s",strrev(str));
//output statement 
printf("\n");
}
int ispal(char str[]){
int len=strlen(str);
for(int i=0;i<len/2;i++){
if(str[i]!=str[len-i-1]){
return 0;
}
}
//palindrome
return 1;
}
int main(){
char input[100];
//output statement 
printf("enter the string:");
//input statement 
scanf("%s",input);
if(ispal(input)){
//output statement 
printf("%s is a palindrome",input);
}
else{
//output statement 
printf("%s is not a palindrome\n",input);
}
}