#include<stdio.h>
void main(){
	int n,i,j;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Sorted array is: \n");
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}