#include<stdio.h>
int main()
{
	int s;
	printf("Enter quiz score out of 10: ");
	scanf("%d",&s);
	if(s==9||s==10) printf("Letter grade assigned is A\n");
	else if (s==7||s==8) printf("Letter grade assigned is B\n");
	else if (s==5||s==6) printf("Letter grade assigned is C\n");
	else if (s==3||s==4) printf("Letter grade assigned is D\n");
	else if (s==2||s==1||s==0) printf("Letter grade assigned is F\n");
	else printf("Invalid input\n");
	return 0;
}
