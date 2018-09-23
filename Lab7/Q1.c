#include<stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n+1],i,j;
	printf("Enter elements of the array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	printf("Array without duplicates:\n");
	for(i=0;i<n;i++)
		for(j=0;j<i;jprintf("%d\n",a[i]);
		
	//Put an element in sorted array
	int ele;
	printf("Enter the element: ");
	scanf("%d",&ele);
	for(i=n;i>=0;i--)
	{
		if(ele<a[i]) a[i+1]=a[i];
		else break;
	}
	a[i+1]=ele;
	printf("Sorted Array:\n");
	for(i=0;i<n+1;i++)
		printf("%d\n",a[i]);
	return 0;
}
