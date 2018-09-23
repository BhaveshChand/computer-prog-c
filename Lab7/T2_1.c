#include<stdio.h>
int main(void)
{
	int i,j,n;
	printf("Enter the number of elements: \n");
	scanf("%d",&n);
	int a[n],b[n];
	printf("Enter %d values: \n", n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(i=0,j=-1;i<n;i++)
		if(a[i]%2==0) b[++j]=a[i];
	
	printf("Even elements of array are:\n");
	for(i=0;i<=j;i++)
		printf("%d\n",b[i]);
	return(0);
}
