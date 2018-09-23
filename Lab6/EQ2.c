#include<stdio.h> 

void main()
{
	int i,j,n;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("*\n*");
		for(j=1;j<=i;j++)
			printf("%d",j);
		for(j=i-1;j>0;j--)
			printf("%d",j);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("*\n*");
		for(j=1;j<=i;j++)
			printf("%d",j);
		for(j=i-1;j>0;j--)
			printf("%d",j);
	}
	if(n==0) printf("*\n");
}