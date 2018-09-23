#include<stdio.h>
int main()
{
	int y;
	printf("Enter a year in the 21st century: ");
	scanf("%d",&y);
	if(y>=2000&&y<2100)
	{
		if((y%4==0&&y%100!=0)||y%400==0)
			printf("%d is a leap year.\n",y);
		else printf("%d is not a leap year.\n",y);
	}
	else printf("The year %d is not in the 21st century.\n",y);
	return 0;
}
