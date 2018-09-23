#include<stdio.h>
int main()
{
	int sum=0;
	long long num;
	scanf("%d",&num);
	do
	{
		sum+=num%10;
		num/=10;
	}while(num!=0);
	printf("%d",sum);
	return 0;
}