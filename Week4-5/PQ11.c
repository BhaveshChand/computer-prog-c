#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		for(j=1;j<=(n-i);j++)
			printf("\t");
		for(j=1;j<i;j++)
			printf("%d\t",j);
		for(j=i;j>0;j--)
			printf("%d\t",j);
		printf("\n");
	}
	for(i=n;i>0;i--)
	{
		for(j=1;j<=(n-i);j++)
			printf("\t");
		for(j=1;j<i;j++)
			printf("%d\t",j);
		for(j=i;j>0;j--)
			printf("%d\t",j);
		printf("\n");
	}
	return 0;
}