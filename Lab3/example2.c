#include<stdio.h>
int main()
{
int a=10;
unsigned long b=40000;
float f=1.23, g;
double d;
g = a + f; // a transforms to float
d = a + b;
/* a  and  b  transform  to unsigned  long,  adding  is  produced  in  unsigned  long 
domain and then the result type unsigned long is transformed to double */
printf(" g value is %f ", g);
printf(" d value is  %lf", d);
return 0;
}
