#include<stdio.h>
int main()
{
	int m,n,o,p;
	printf("Enter m,n,o,p: \n");
	scanf("%d%d%d%d",&m,&n,&o,&p);
	int a[m][n],b[o][p];
	int i,j,k;
	printf("Enter elements of matrix: \n");
	for (i=0;i<m;i++)
	{
		printf("Row %d:\n",i+1);
		for(j=0;j<n;j++)
			scanf ("%d",&a[i][j]);
	}
	if(m==o&&n==p)
	{
		int add[m][n],sub[m][n];
		for (i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				add[i][j]=a[i][j]+b[i][j];
				sub[i][j]=a[i][j]-b[i][j];
			}
		}
		printf("Addition of matrices is: \n");
		for (i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d\t",add[i][j]);
			}
			printf("\n");
		}
		printf("Subtraction of matrices is: \n");
		for (i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d\t",sub[i][j]);
			}
			printf("\n");
		}
	}
	else printf("Addition and subtraction not possible if m!=o or n!=p.\n");
	if(n==o)
	{
		int mul[m][p];
		printf("Multiplication of matrices is: \n");
		for (i=0;i<m;i++)
		{
			for(j=0;j<p;j++)
			{
				for(mul[i][j]=0,k=0;k<n;k++)
				{
					mul[i][j]+=a[i][k]*b[k][j];
				}
				printf("%d\t",mul[i][j]);
			}
			printf("\n");			
		}
	}
	else printf("Multiplication not possible if n!=o.\n");
}