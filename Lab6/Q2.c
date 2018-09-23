#include<stdio.h> 

void main()
{
	long long bin,temp;
	int i,digoct,digbin,pvbin,oct,pvoct;
 INPUT:	oct=0,pvoct=1;
	printf("Enter a binary number: ");
	scanf("%lli",&bin);
	temp=bin;
	do
	{
		pvbin=1;
		for(digoct=0,i=0;i<3;i++)
		{
			digbin=temp%10;
			if(digbin==0||digbin==1)
			{
				digoct+=(digbin)*pvbin;
				pvbin*=2;
				temp/=10;
			}
			else
			{
				printf("Invalid number\n");
				goto INPUT;
			}
		}
		oct+=digoct*pvoct;
		pvoct*=10;
	}while(temp!=0);
	printf("Octal equivalent of binary no. %lli is %d.\n",bin,oct);
}