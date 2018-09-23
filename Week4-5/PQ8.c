#include <stdio.h>
int main() 
{ 
int n,i,j;
printf("Enter height of Pascal's triangle: ");
scanf("%d",&n);
int a[n][n];
for(i=0;i<n;i++)
{
	for(j=1;j<n-i;j++)
		printf("\t");
	a[i][0]=1;
	a[i][1]=0;
	printf("%d\t\t",a[i][0]);
	for(j=1;j<=i;j++)
	{
		a[i][j]=a[i-1][j-1]+a[i-1][j];	
		printf("%d\t\t",a[i][j]);
	}
	a[i][j]=0;
	printf("\n");
}
return 0; 
}


