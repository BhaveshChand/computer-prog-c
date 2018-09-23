#include<stdio.h>
void main()
{
	int n1,n2,i,j,ele;
	
	printf("Enter no. of elements in 1st array: ");	//Initialise 1st array
	scanf("%d",&n1);
	int a[n1];
	printf("Enter the elements in 1st array:\n");
	for(i=0;i<n1;i++)
		scanf("%d",&a[i]);
	
	printf("Enter no. of elements in 2nd array: ");	//Initialise 2nd array
	scanf("%d",&n2);
	int b[n2];
	printf("Enter the elements in 2nd array:\n");
	for(i=0;i<n2;i++)
		scanf("%d",&b[i]);
	
	for(i=1;i<n1;i++)	//Insertion sort 1st array
	{
		ele=a[i];
		for(j=i-1;j>=0;j--)
		{
			if(a[j]>ele) a[j+1]=a[j];
			else break;
		}
		a[j+1]=ele;
	}
	printf("Sorted 1st array={");
	for(i=0;i<n1;i++) printf("%d,",a[i]);
	printf("}\n");
	
	for(i=1;i<n2;i++)	//Insertion sort 2nd array
	{
		ele=b[i];
		for(j=i-1;j>=0;j--)
		{
			if(b[j]>ele) b[j+1]=b[j];
			else break;
		}
		b[j+1]=ele;
	}
	printf("Sorted 2nd array={");
	for(i=0;i<n2;i++) printf("%d,",b[i]);
	printf("}\n");
	
	int un[n1+n2],k;	//Union of sorted arrays
	for(i=0,j=0,k=0;(i<n1)&&(j<n2);k++)
	{
		if(a[i]<b[j])
		{
			un[k]=a[i];
			i++;
		}
		else if(b[j]<a[i])
		{
			un[k]=b[j];
			j++;
		}
		else
		{
			un[k]=a[i];
			i++;
			j++;
		}
		if(i>=n1)
			for(k++;j<n2;j++,k++)
				un[k]=b[j];
		if(j>=n2)
			for(k++;i<n1;i++,k++)
				un[k]=a[i];
	}
	printf("Union={");
	for(i=0;i<k-1;i++) printf("%d,",un[i]);
	printf("}\n");
	
	int in[(n1<n2)?n1:n2];	//Intersection of sorted arrays
	for(i=0,j=0,k=0;(i<n1)&&(j<n2);)
	{
		if(a[i]<b[j]) i++;
		else if(b[j]<a[i]) j++;
		else
		{
			un[k]=a[i];
			i++;
			j++;
			k++;
		}
	}
	printf("Intersection={");
	for(i=0;i<k;i++) printf("%d,",un[i]);
	printf("}\n");	
}