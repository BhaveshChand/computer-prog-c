#include<stdio.h>
void main()
{
	int n,i,j,count=0,x;
	printf("Enter no. of elements: ");	//Initialise array
	scanf("%d",&n);
	int a[n];
 	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(i=1;i<n;i++)	//Insertion sort array
	{
		int ele=a[i];
		for(j=i-1;j>=0;j--)
		{
			if(a[j]>ele) a[j+1]=a[j];
			else break;
		}
		a[j+1]=ele;
	}
	printf("Sorted array={");
	for(i=0;i<n;i++) printf("%d,",a[i]);
	printf("}\n");

	printf("Enter x: ");
	scanf("%d",&x);
	for(i=0;i<n;i++)
		if(x==a[i]) count++;
	if(count>n/2) printf("%d appears more than n/2=%d times in the array.",x,n/2);
	else printf("%d does not appear more than n/2=%d times in the array.",x,n/2);
}