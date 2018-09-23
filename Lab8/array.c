#include<stdio.h>
void readArray(int a[],int size); // Observe how array a[] is passed as input parameter
void printArray(int a[],int size);
int arraySum(int a[], int size);
int main()
{
	int a[20],sum,n;
	printf("Enter number of elements in array a:\n");
	scanf("%d",&n);
	readArray(a,n);
	printArray(a,n);
	sum = arraySum(a,n);
	printf("sum = %d\n",sum);
}
void readArray(int a[],int size){
	int i; //local variable: local to function readArray()
	for(i=0;i<size;i++)
	scanf("%d",&a[i]);
}
void printArray(int a[],int size){
	int i;
	for(i=0; i<size; i++)
	printf("%d\n",a[i]);
}
int arraySum(int a[], int size){
	int i,sum=0; // i and sum are local to function arraySum()
	for(i=0; i<size; i++)
	sum = sum + a[i];
	return sum;
}