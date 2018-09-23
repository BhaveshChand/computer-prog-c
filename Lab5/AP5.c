#include<stdio.h>
int main()
{
	int count=0;
	float avg,num=0,sum=0;
	printf("Enter -1 as input whenever you wish to stop.\n");
	do
	{
		printf("Enter positive number: ");
		scanf("%f",&num);
		if(num>=0)
		{
			sum+=num;
			count++;
		}
	}while(num!=-1);
	avg=sum/count;
	printf("Average of %d nos entered is %f.\n",count,avg);
}
