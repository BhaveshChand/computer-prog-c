#include <stdio.h>
int main() 
{ 
long long sum=0,num,dig;
int n,i,j;
scanf("%d",&n);
if(n==0) printf("0 = 0");
else
{
	for(i=1;i<=n;i++)
	{
		for(j=0,dig=i,num=0;j<i;j++,dig=dig*10)
		{
			num=num+dig;
		}
		printf("%lli ",num);
		if(i!=n) printf("+");
		sum=sum+num;
	}
	printf("= %lli",sum);	
}	
return 0; 
}


