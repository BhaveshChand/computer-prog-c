#include<stdio.h>
int main()
{
	long long num,temp;
	int sum=0;
	printf("Enter a positive integer: ");
	scanf("%lli",&num);
	temp=num;
	while(temp!=0)
	{
		sum+=(temp%10);
		temp/=10;
	}
	printf("The sum of digits in %lli is %d.\n",num,sum);
}
