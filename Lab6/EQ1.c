#include<stdio.h> 

void main()
{
	int i,j,n;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		for(j=1;j<=(i-1);j++)
			printf("\t");
		printf("%d\t",i);
		for(j=1;j<=(2*n-2*i-1);j++)
			printf("\t");
		printf("%d\n",i);
	}
	for(j=1;j<n;j++)
		printf("\t");
	printf("%d\n",n);
	for(i=n-1;i>0;i--)
	{
		for(j=1;j<=(i-1);j++)
			printf("\t");
		printf("%d\t",i);
		for(j=1;j<=(2*n-2*i-1);j++)
			printf("\t");
		printf("%d\n",i);
	}
}