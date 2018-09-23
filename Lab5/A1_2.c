#include<stdio.h>
int main()
{
	int sign=1,i=0,n;
	double pi=0;
	printf("Enter the no. of terms to process: ");
	scanf("%d",&n);
	while(i<n)
	{
		pi+=sign*(4/(2*(float)i+1));
		sign*=-1;
		i++;
	}
	printf("Approximate value of pi is %f.\n",pi);
}
