#include<stdio.h>
int main()
{
	int m;
	printf("Enter month no.: ");
	scanf("%d",&m);
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12) printf("31 days\n");
	else if (m==4||m==6||m==9||m==11) printf("30 days\n");
	else if (m==2) printf("29 days if leap year, 28 days for a normal year\n");
	else printf("Invalid input\n");
	return 0;
}
