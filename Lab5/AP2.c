#include<stdio.h>
int main()
{
	int i,sum=0,n,num;
	float avg;
	printf("Enter the no. of nos. you want to enter: ");
	scanf("%d",&n);
	if(n)
	{
		for(i=1;i<=n;i++)
		{
			printf("Enter a number: ");
			scanf("%d",&num);
			sum+=num;
		}
		avg=(float)sum/n;
		printf("Average of the entered nos. is %f.\n",avg);
	}
}
