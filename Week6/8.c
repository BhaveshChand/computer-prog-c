#include<stdio.h>
void main()
{
	int r,c,i,j;
	printf("Enter the no. of rows: ");
	scanf("%d",&r);
	printf("Enter the no. of columns: ");
	scanf("%d",&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
		printf("Enter elements of row %d:\n",i);
		for(j=0;j<c;j++) scanf("%d",&a[i][j]);
	}
	printf("Matrix is: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++) 
			printf("%d\t",a[i][j]);
		printf("\n");
	}
	int ri=0,rf=r-1,ci=0,cf=c-1;
	printf("Matrix in spiral form is:\n");
	do
	{
		for(j=ci;j<=cf;j++) 
		{
			printf("%d ",a[ri][j]);
			//ri++;
		}
		if((++ri)<=rf)
		{
			for(i=ri;i<=rf;i++) 
			{
				printf("%d ",a[i][cf]);
				//cf--;
			}
			if(ci<=(--cf))
			{
				for(j=cf;j>=ci;j--) 
				{
					printf("%d ",a[rf][j]);
					//rf--;
				}
				if(ri<=(--rf))
				{
					for(i=rf;i>=ri;i--) 
					{
						printf("%d ",a[i][ci]);
						//ci++;
					}
				}
			}
		}
	}while((++ci)<=cf);
}