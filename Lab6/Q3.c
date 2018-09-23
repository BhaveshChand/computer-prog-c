#include<stdio.h> 

void main()
{
	long long bin,temp;
	int i,digbin,pvbin,dec;
 INPUT:	dec=0;pvbin=1;
	printf("Enter a binary number: ");
	scanf("%lli",&bin);
	temp=bin;
	do
	{
		digbin=temp%10;
		if(digbin==0||digbin==1)
		{
			dec+=digbin*pvbin;
			pvbin*=2;
			temp/=10;
		}
		else
		{
			printf("Invalid number\n");
			goto INPUT;
		}
	}while(temp!=0);
	printf("Decimal equivalent of binary no. %lli is %d.\n",bin,dec);
}