#include<stdio.h>
int main()
{
int  i = 17;
char c = 'c'; /* ascii value is 99 */
float sum;
sum = i + c;
printf("Value of sum : %f\n %lu", sum,sizeof(sum) );
return 0;
}

