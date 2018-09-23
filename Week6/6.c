#include<stdio.h>
void main()
{
	int r,c,n,i,j;
	printf("Enter the no. of rows: ");
	scanf("%d",&r);
	printf("Enter the no. of columns: ");
	scanf("%d",&c);
	if(r<c) n=c;
	else n=r;
	int a[n][n];
	if(r<c)
	{
		for(i=0;i<r;i++)
		{
			printf("Enter elements of row %d:\n",i);
			for(j=0;j<c;j++) scanf("%d",&a[i][j]);
		}
		for(i=r;i<n;i++)
			for(j=0;j<c;j++) a[i][j]=0;
	}
	else
	{
		for(i=0;i<r;i++)
		{
			printf("Enter elements of row %d:\n",i);
			for(j=0;j<c;j++) scanf("%d",&a[i][j]);
			for(j=c;j<n;j++) a[i][j]=0;
		}
	}
	printf("Initial matrix is: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++) 
			printf("%d\t",a[i][j]);
		printf("\n");
	}
	for(i=0;i<n;i++)
		for(j=0;j<i;j++)
		{
			int temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
		}
	printf("Final matrix is: \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++) 
			printf("%d\t",a[i][j]);
		printf("\n");
	}
}