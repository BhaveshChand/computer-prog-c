#include<stdio.h>
#include<math.h>
long int fact( int n)/* Function Definition */
{
	int i;
	long int f=1;
	for( i=1; i<=n; i++ )
		f *= i; return f;
}
float cossum(float x, int n) /* Function Definition */
{
	int i,sign=1;
	float sum=0.0, element;
	for( i=0; i<=n; i++ )
	{
		element = sign * pow(x,2*i)/fact(2*i); /* Function Call */
		sign *= -1;
		sum += element;
	}
	return sum;
}
/* cossum is taking two arguments x and n, where x is of type float and n is of type integer */

long int fact(int n); /* Function Declaration */
float cossum(float x, int n); /*Function Declaration */
int main()
{
	int n;
	float x, cos_sum;
	printf("Enter value of x and n");
	scanf("%f %d",&x,&n);
	cos_sum = cossum(x,n); /* Function Call */
	printf("Sum of cos series = %f",cos_sum);
	return 0;
}