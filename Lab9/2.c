#include<stdio.h>

void del_dup(int arr[],int *n){
	
	int i,j,k=0;
	for(i=0;i<*n;i++){
		for(j=0;j<k;j++)
			if(arr[j]==arr[i]) break;
		if(k==j){
			arr[k]=arr[i];
		 	k++;
		}
	}
	*n=k;
}

void main(){
	int arr[20]={5,6,7,9,2,4,5,9,6,4,2,1,6,1,1,4,4,4,8,8};
	int n=20;
	del_dup(arr,&n);
	for(int i=0;i<n;i++) printf("%d",arr[i]);
}		 
