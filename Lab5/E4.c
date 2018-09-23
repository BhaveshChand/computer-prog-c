#include<stdio.h> 
#include<math.h>
void main()
{
	int n,i;
	double dnr,x,temp,sum=0;
	printf("Enter the no. of elements to compute: ");
	scanf("%d",&n);
	printf("Enter x: ");
	scanf("%lf",&x);
	temp=x;
	for(i=1;i<=n;i++)
	{
		dnr=sqrt(i);
		sum+=(temp/dnr);
		temp*=(-x);
	}
	printf("Sum of series is %f.\n",sum);
}