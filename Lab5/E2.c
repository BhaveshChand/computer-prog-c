#include<stdio.h>
int main()
{
	int num,temp,a[32]={},i=31;
	printf("Enter an integer: ");
	scanf("%d",&num);
	temp=num;
	if(temp>=0)
	{
		do
		{
			a[i]=temp%2;
			temp/=2;
			i--;
		}while(temp!=0);
	}
	else
	{
		temp*=-1;
		do
		{
			a[i]=temp%2;
			temp/=2;
			i--;
		}while(temp!=0);
		for(i=0;i<32;i++) a[i]=!a[i];
		for(i=31;i>=0;i--)
		{
			a[i]=!a[i];
			if(a[i]==1) break;
		}
	}
	printf("Binary equivalent of %d is ",num);
	for(i=0;i<32;i++) printf("%d",a[i]);
	printf("\n");
}	
