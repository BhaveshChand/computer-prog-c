#include<stdio.h>
int main()
{
	int n1,n2=0,i=0,a[10],temp=1;
	scanf("%d",&n1);
	do
	{
		a[i]=n1%10;
		n1/=10;
		i++
	}while(n!=0);
	for(i=i;i>0;i--)
	{
		n2+=a[i-1]*temp;
		temp*=10;
	}
	printf("%d",n2);
	return 0;
}