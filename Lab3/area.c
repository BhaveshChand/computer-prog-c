#include<stdio.h>
#define PI 3.14
int main()
{
	float R,A;
	printf("Input radius of circle ");
	scanf("%f",&R);
	A=PI*R*R;
	printf("Area of circle is %f",A);
	return 0;
}
