#include<stdio.h>

#include<math.h>

int main()

{

	int i,n=1,r,flag=0;

	float test;

	printf("Enter you range, i.e. from 1 to ");

	scanf("%d",&r);

	printf("All prime nos. in this range are:\n");

	while(++n<=r)

	{

		flag=0;

		test=sqrt(n);

		i=1;

		while(++i<=test)

		{

			if(n%i==0)
 
			{

				flag=1;

				break;

			}

		}

		if(flag==0) printf("%d\n",n);

	}

}
