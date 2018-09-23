#include<stdio.h> 

void main()
{
	int i,j,n;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=1;j<=i;j++)
			printf("%d",j);
		printf("\n");
	}
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf("%d",j);
		printf("\n");
	}
}