#include<stdio.h>
int main()
{
	int mark,high=0,low=100,sum=0,n=0;
	char stat;
	do
	{
		printf("Enter marks out of 100: ");
		stat=scanf("%d",&mark);
		if(mark>high) high=mark;
		if(mark<low) low=mark;
		sum+=mark;
		n++;
		printf("Want to give another input?(Y/N):");
		scanf(" %c",&stat);
	}while(stat=='Y'||stat=='y');
	printf("Highest=%d, Lowest=%d, Average=%f",high,low,(float)sum/n);
	return 0;
}