#include<stdio.h>
#include<math.h>
long int fact( int n)/* Function Definition */
{
	int i;
	long int f=1;
	for( i=1; i<=n; i++ )
		f *= i; return f;
}
float sinsum(float x, int n) /* Function Definition */
{
	int i,sign=1;
	float sum=0.0, element;
	for( i=1; i<=n; i++ )
	{
		element = sign * pow(x,2*i-1)/fact(2*i-1); /* Function Call */
		sign *= -1;
		sum += element;
	}
	return sum;
}
/* sinsum is taking two arguments x and n, where x is of type float and n is of type integer */

long int fact(int n); /* Function Declaration */
float sinsum(float x, int n); /*Function Declaration */
int main()
{
	int n;
	float x, sin_sum;
	printf("Enter value of x and n");
	scanf("%f %d",&x,&n);
	sin_sum = sinsum(x,n); /* Function Call */
	printf("Sum of sin series = %f",sin_sum);
	return 0;
}