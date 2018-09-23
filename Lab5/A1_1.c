#include<stdio.h>
int main()
{
	int sign=1,i,n;
	double pi=0;
	printf("Enter the no. of terms to process: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		pi+=sign*(4/(2*(float)i+1));
		sign*=-1;
	}
	printf("Approximate value of pi is %f.\n",pi);
}
