#include<stdio.h>
int main()
{
	int s;
	printf("Enter quiz score out of 10: ");
	scanf("%d",&s);
	switch(s)
	{
		case 10:
		case 9:
			printf("Letter grade assigned is A\n");
			break;
		case 8:
		case 7:
			printf("Letter grade assigned is B\n");
			break;
		case 6:
		case 5:
			printf("Letter grade assigned is C\n");
			break;
		case 4:
		case 3:
			printf("Letter grade assigned is D\n");
			break;
		case 2:
		case 1:
		case 0:
			printf("Letter grade assigned is F\n");
			break;
		default:
			printf("Invalid input\n");
	}
	return 0;
}
