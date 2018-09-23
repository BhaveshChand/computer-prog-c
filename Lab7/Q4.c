#include<stdio.h>
int main()
{
	int r,c,n,i,j,k;	//Transpose start
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
	printf("Transpose matrix is: \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++) 
			printf("%d\t",a[i][j]);
		printf("\n");
	}	//Transpose end
	
	if(r!=c) printf("Determiant doesn't exist."); //Determinant start
	else
	{
		//det(t(A))=det(A)
		double b[n][n],det=1;
		for (i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			b[i][j]=(float)a[i][j];
		}
		for(i=0;i<n;i++)
		{
			if(b[i][i]==0)
			{
				j=0;
				do
				{
					if(b[j][i]!=0)
					{
						for(k=0;k<n;k++)
						{
							b[i][k]+=b[j][k];
						}
						break;
					}
					else j++;
				}while(j<n);
			}
		}
		for(i=0;i<n;i++)
		{
			det*=b[i][i];
			if(det==0) break;
			double c=b[i][i];
			for(k=0;k<n;k++)
			{
				b[i][k]/=c;
			}
			for(j=i+1;j<n;j++)
			{
				c=b[j][i];
				for(k=0;k<n;k++)
				{
					b[j][k]-=c*b[i][k];
				}
			}
		}
		printf("Determinant of the matrix is %f.\n",det);
	}
}