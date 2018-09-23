#include<stdio.h> 
#include<math.h>
void main()
{
	int count,n=2,j=0;
	printf("Enter the no. of primes to display: ");
	scanf("%d",&count);
	while(j<count)

	{

		int flag=0;

		int test=sqrt(n);

		int i=1;

		while(++i<=test)

		{

			if(n%i==0)
 
			{

				flag=1;

				break;

			}

		}

		if(flag==0)
		{
			printf("%d\n",n);
			j++;
		}
		n++;
	}

}