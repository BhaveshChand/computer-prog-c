#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	n--;
	for(i=n;i>n/2;i--)
	{
		int temp=a[i];
		a[i]=a[n-i];
		a[n-i]=temp;
	}
	printf("The reversed array is:\n");
	for(i=0;i<n+1;i++)
		printf("%d\n",a[i]);
}