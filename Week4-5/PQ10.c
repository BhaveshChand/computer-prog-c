#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=1;j<=i;j++)
			printf("%d\t",j);
		for(j=1;j<=(2*(n-i));j++)
			printf("\t");
		for(j=i;j>0;j--)
			printf("%d\t",j);
		printf("\n");
	}
	return 0;
}