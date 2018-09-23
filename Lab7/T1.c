#include<stdio.h>
int main(void)
{
	int i,n,a[25];
	printf("Enter the number of elements: \n");
	scanf("%d",&n);
	printf("Enter %d values: \n", n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	/*Find the largest and second largest and third largest element*/
	int max1,max2,max3;	
	max1=max2=max3=-2147483647;
	for(i=0;i<n;i++)
	{
		if(a[i]>max3)
		{
			max3=a[i];
			if(a[i]>max2)
			{
				max3=max2;
				max2=a[i];
				if(a[i]>max1)
				{
					max2=max1;
					max1=a[i];
				}
			}
		}
	}

	/* Print the largest value, second largest value and third largest */
	printf("Largest=%d, Second largest=%d, Third largest=%d",max1,max2,max3);
	
	return(0);
}