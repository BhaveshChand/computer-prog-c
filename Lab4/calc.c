#include <stdio.h>
#include <math.h>
int main()
{
	int n1, n2;
	float res;
	char op;
	printf ("Enter first number: ");
	scanf("%d",&n1);
	printf ("Enter the operator to use (+ OR / OR ^): ");
        scanf (" %c",&op);
	printf ("Enter second number: ");
	scanf("%d",&n2);
	if (op=='+') res=n1+n2;
	else if (op=='/') res=(float)n1/(float)n2;
	else if (op=='^') res=pow(n1,n2);
	else
	{
		printf ("Invalid Operator\n");
		return 0;
	}
	printf("%d%c%d=%f\n",n1,op,n2,res);
	return 0;
}
