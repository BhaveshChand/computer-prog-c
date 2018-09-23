#include<stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n],i,j;
	printf("Enter elements of the array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	//Sort using Selection sort
	for(i=0;i<n;i++)
	{
		int min,temp;
		for(min=a[i],temp=i,j=i;j<n;j++)
		{
			if(a[j]<min) 
			{
				temp=j;
				min=a[j];
			}
		}
		a[temp]=a[i];
		a[i]=min;
	}
	printf("Sorted Array:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	return 0;
}
