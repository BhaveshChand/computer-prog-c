#include<stdio.h>
int main(void)
{
	int i,j,k,n,flag;
	printf("Enter the number of elements: \n");
	scanf("%d",&n);
	printf("Enter %d values: \n", n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0,j=0;i<n;i++)
	{
		for(k=0,flag=0;k<j;k++)
		{
			if(b[k]==a[i])
			{
				flag=1;
				break;
			}	
		}
		if(flag==0)
		{
			b[j]=a[i];
			j++;
		}
	}

	printf("After deletion of duplicates: \n");
	for(k=0;k<j;k++)
		printf("%d\n",b[k]);

	return 0;
}
	