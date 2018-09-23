#include<stdio.h> 
#include<math.h>
int main() 
{ 
double  a,b,c,x1,x2; 
printf("Enter values of a,b and c"); 
scanf("%lf%lf%lf",&a,&b,&c); 
x1 = (-b + sqrt((b*b)-(4*a*c)))/(2*a);   
x2 = (-b-sqrt((b*b) -(4*a*c)))/(2*a); 
printf("The first root of the quadratic eqn is %lf\n", x1); 
printf("The second root of the quadratic eqn is %lf\n", x2); 
return 0; 
}
