#include<stdio.h>
void insert(float a[],int n,float new, int *size){
	int i;
	for(i=n-1;i>=0;i--){
		if(new<a[i]) a[i+1]=a[i];
		else break;
	}
	a[i+1]=new;
	*size+=1;
}
int delete(float a[],int n,float key, int *size){
	int flag=0;
	for(int i=0;i<n;i++){
		if(a[i]==key){
			flag=1;
			for(;i<n;i++){
				a[i]=a[i+1];
			}
			*size-=1;
		}
	}
	return flag;
}
int count150(float a[],int n){
	int count=0;
	for(int i=0;i<n;i++){
		if(a[i]<150) count++;
	}
	return count;
}
int count1550(float a[],int n){
	int count=0;
	for(int i=0;i<n;i++){
		if(a[i]>1550) count++;
	}
	return count;
}
void readarr(float a[],int n){
	for(int i=0;i<n;i++) scanf("%f",&a[i]);
}
void printarr(float a[],int n){
	for(int i=0;i<n;i++) printf("%f\n",a[i]);
}
void bsort(float a[], int n){
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
void main(){
	int n;	//Initialise array
	printf("Enter no. of books: ");
	scanf("%d",&n);
	float a[32767]={};
	printf("Enter prices of %d books:\n",n);	//Input data
	readarr(a,n);
	bsort(a,n);
	printf("Sorted list of prices:\n");
	printarr(a,n);
	float new;	//Insert new entry
	printf("Enter new book price to insert: ");
	scanf("%f",&new);
	insert(a,n,new,&n);
	printf("List after insertion:\n");
	printarr(a,n);
	float key;	//Delete an entry
	printf("Enter the book to delete: ");
	scanf("%f",&key);
	int flag=delete(a,n,key,&n);
	if(flag==0) printf("Entry doesn't exist.");
	else{
		printf("List after deletion:\n");
		printarr(a,n);
	}
	printf("No. of books whose price<150 is %d.\n",count150(a,n));	//count price<150
	printf("No. of books whose price>1550 is %d.\n",count1550(a,n));	//count price>1550
}