#include<stdio.h>
int main()
{
	int i=1,n;
	float avg,num,sum=0;
	printf("Enter the no. of nos. you want to enter: ");
	scanf("%d",&n);
	if(n)
	{
		do
		{
			printf("Enter a number: ");
			scanf("%f",&num);
			sum+=num;
			i++;
		}while(i<=n);
		avg=sum/n;
		printf("Average of the entered nos. is %f.\n",avg);
	}
}
