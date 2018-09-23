#include<stdio.h>
void main()
{
	int n,i,j;
	printf("Enter no. of elements: ");	//Initialise array
	scanf("%d",&n);
	int a[n];
 INPUT: printf("Enter the elements. All elements should be 0 or 1.\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(i=1;i<n;i++)	//Insertion sort binary array
	{
		int ele=a[i];
		if(ele!=0&&ele!=1) 
		{
			printf("Invalid number\n);
			goto INPUT;
		}
		else if(ele==0)
		{
			for(j=i-1;j>=0;j--)
			{
				if(a[j]==1) a[i]=1;
				else break;
			}
			a[j+1]--;
		}
	}
	printf("Segregated array={");
	for(i=0;i<n;i++) printf("%d,",a[i]);
	printf("}\n");
}