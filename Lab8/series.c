#include<stdio.h>
#include<math.h>
long int fact( int n)/* Function Definition */
{
	int i;
	long int f=1;
	for( i=1; i<=n; i++ )
		f *= i; return f;
}
int sign(int i)
{
	if(i%3==0) return -1;
	else return 1;
}float seriessum(float x, int n) /* Function Definition */
{
	int i;
	float sum=0.0, element;
	for( i=1; i<=n; i++ )
	{
		element = sign(i) * pow(x,i)/fact(i); /* Function Call */
		sum += element;
	}
	return sum;
}

/* seriessum is taking two arguments x and n, where x is of type float and n is of type integer */

long int fact(int n); /* Function Declaration */
float seriessum(float x, int n); /*Function Declaration */
int sign(int i);
int main()
{
	int n;
	float x, series_sum;
	printf("Enter value of x and n");
	scanf("%f %d",&x,&n);
	series_sum = seriessum(x,n); /* Function Call */
	printf("Sum of series = %f",series_sum);
	return 0;
}