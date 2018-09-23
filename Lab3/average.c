#include <stdio.h>
int main()
{
int total=65,n=7;
float average;
average = total/n;
printf("average=%f",average); // result would be 7.000000  because expression type is integer
average= (float)total/n; // this will convert marks into float than expression is evaluated
printf("average=%f",average); // result would be7.03......
return 0;
}
