#include<stdio.h>
#define n 5
void main()
{
	int i,j,flag=0;
	int a[n][n];
	for(i=0;i<n;i++)
	{
		printf("Enter elements of row %d:\n",i);
		for(j=0;j<n;j++) scanf("%d",&a[i][j]);
	}
	printf("Matrix is: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++) 
			printf("%d\t",a[i][j]);
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i][j]!=a[j][i]);
			{
				flag=1;
				break;
			}
		}
		if(flag) break;
	}
	if(flag) printf("Not a ");
	printf("Symmetric Matrix");
}