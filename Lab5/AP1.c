#include<stdio.h>
int main()
{
	int i,sum=0,n;
	float avg;
	printf("Enter a natural number: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
		sum+=i;
	avg=(float)sum/n;
	printf("Average of first %d natural nos. is %f.\n",n,avg);
}
