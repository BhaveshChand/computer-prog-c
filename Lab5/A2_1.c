#include<stdio.h>

#include<math.h>

int main()

{

	int i,n,r,flag=0;

	float test;

	printf("Enter you range, i.e. from 1 to ");

	scanf("%d",&r);

	printf("All prime nos. in this range are:\n");

	for(n=2;n<=r;n++)

	{

		test=sqrt(n);

		for(i=2,flag=0;i<=test;i++)

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
