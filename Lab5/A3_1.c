#include<stdio.h>
int main()
{
	long long num,temp;
	int i=0,dig=0,a[100],flag=0;
	printf("Enter the number to be evaluated: ");
	scanf("%lli",&num);
	temp=num;
	do
	{
		a[dig]=temp%10;
		temp/=10;
		dig++;
	}while(temp!=0);
	dig--;
	for(i=dig;i>dig/2;i--)
	{
		if(a[i]!=a[dig-i])
		{
			flag=1;
			break;
		}
	}
	if(flag) printf("%lli is not a palindrome.\n",num);
	else printf("%lli is a palindrome.\n",num);
	return 0;
}
