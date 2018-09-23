#include<stdio.h>
void main()
{
	int n,flag=0,i,j;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Leaders found: ");
	for(i=0;i<n;i++,flag=0)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<=a[j])
			{
				flag=1;
				break;
			}
		}
		if(!flag) printf("%d,",a[i]);
	}
}