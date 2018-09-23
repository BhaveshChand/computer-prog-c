#include<stdio.h>
void main()
{
	int n,i,min1=2147483647,min2=2147483647;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]<min2)
		{
			min2=a[i];
			if(a[i]<min1)
			{
				min2=min1;
				min1=a[i];
			}
		}
	}
	printf("Smallest=%d, Second smallest=%d",min1,min2);
}