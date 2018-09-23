#include<stdio.h> 
int main() 
{ 
char char1,char2,temp; 
printf("Enter values of char1 and char2"); /* char1=’A’ and char2=’B’ */
scanf("%c %c",&char1,&char2); 
/* Swap the characters using Temp variable */
temp =  char1;
char1 = char2;
char2 = temp;
printf("%c%c",char1,char2);
return 0; 
} 
