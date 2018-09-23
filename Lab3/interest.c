#include<stdio.h>
int main()
{
	int p,r,y,i;
	printf("Enter values of Principal amount, Interest rate in %, No. of years\n");
	scanf("%d%d%d",&p,&r,&y);
	i=p*r*y/100;
	printf("Interest to be paid is %d",i);
	return 0;
}
