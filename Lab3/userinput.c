#include<stdio.h>
int main() 
{ 
int a;
int b;
printf("Enter value of a"); 
scanf("%d",&a);                   // Reading user input for the variable ‘a’  
printf("Enter the value of b"); 
scanf("%d",&b);                  // Reading user input for the variable ‘b’  
printf("a=%d,%lu",a,sizeof(a));
printf("b=%d",b);
return 0; 
} 
