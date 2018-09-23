#include<stdio.h>
void main()
{
	int n,x,i,j,sum,min=2147483647,imin,jmin;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			sum=a[i]+a[j];
			if(sum<0) sum*=-1;
			if(sum<=min)
			{
				min=sum;
				imin=i;
				jmin=j;
			}
		}
	}
	printf("2 elements whose sum is closest to 0 are %d & %d.",a[imin],a[jmin],x);
}