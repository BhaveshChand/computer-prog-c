#include<stdio.h>
void bsort(int a[], int n){
	for(int i=0;i<n;i++){
		for(int j=n-1;j>i;j--){
			if(a[j]<a[j-1]){
				int temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
}
int bsearch(int a[],int n,int key){
	int low=0;
	int high=n-1;
	int flag=0,mid;
	do{
		mid=(low+high)/2;
		if(a[mid]==key){
			flag=1;
			break;
		}
		else if(a[mid]>key) high=mid-1;
		else low=mid+1;
	}while(low<=high);
	if(flag) return mid;
	else return -1;
}
void main(){
	int n,i,key;
	printf("Enter no. of integers to enter: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	bsort(a,n);
	printf("Sorted array:\n");
	for(i=0;i<n;i++) printf("%d\n",a[i]);
	printf("Enter element to search for: ");
	scanf("%d",&key);
	int found=bsearch(a,n,key);
	if(found==-1) printf("Element not found.\n");
	else printf("Element found at position %d.\n",found);
}