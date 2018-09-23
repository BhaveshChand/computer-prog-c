#include<stdio.h>
void main()
{
	int n,x,flag=0,i,j;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter x: ");
	scanf("%d",&x);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((a[i]+a[j])==x)
			{
				flag=1;
				break;
			}
		}
		if(flag) break;
	}
	if(flag)
		printf("Found elements %d & %d whose sum is x=%d.",a[i],a[j],x);
	else
		printf("No 2 elements' sum is x=%d.",x);
}