#include<stdio.h> 

void main()
{
	int i,j=0,k=0,n;
	printf("Enter no. of rows to print: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf("%d ",++k);
		printf("\n");
	}
}