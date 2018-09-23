#include<stdio.h>      /*IncludeHeader Files */
int main()             /* main() is the entry point of the program */ 
{
int a,b,c,min;
printf("enter three numbers");
scanf("%d%d%d",&a,&b,&c);
min= (a< b ? (a < c ? a :c) : (b < c ? b : c));
printf("min =%d",min);
return 0; 
} 
