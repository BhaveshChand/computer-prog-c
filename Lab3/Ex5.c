#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,n,answer;
	printf("Enter a,b,n ");
	scanf("%d%d%d",&a,&b,&n);
	answer=pow(a+b,n);
	printf("Answer is %d",answer);
	return 0;
}
