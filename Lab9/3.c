#include<stdio.h>

void count(int arr[],int n){
	int i,count[5]={};
	for(i=0;i<n;i++) count[arr[i]-1]++;
	for(i=0;i<5;i++) printf("%d occurs %d times.\n",i+1,count[i]);
}

void main(){
	int arr[]={1,2,3,5,2,5,1,3,3,5,1,2,3,5,1,2,3,3};
	count(arr,18);
}
