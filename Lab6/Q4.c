#include<stdio.h> 

void main()
{
	int i,j,m,n;
 	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter m: ");
	scanf("%d",&m);
	if(n<=m)
	{
		for(i=1;i<=10;i++)
		{
			for(j=n;j<=m;j++)
				printf("%dX%d=%d\t",j,i,j*i);
			printf("\n");
		}
	}
	else
	{
		for(i=1;i<=10;i++)
		{
			for(j=n;j>=m;j--)
				printf("%dX%d=%d\t",j,i,j*i);
			printf("\n");
		}
	}
}