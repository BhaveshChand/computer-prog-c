#include<stdio.h>
int main()
{
	for(int i=1;i<=20;i++)
	{
		int j=2;
		while(j<=5)
		{
			printf("%d\t",j*i);
			j++;
		}
		printf("\n");
	}
	return 0;
}
