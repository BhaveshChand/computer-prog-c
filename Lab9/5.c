#include<stdio.h>

int n=10;

void populateArray(int arr[][n],int m){
	for(int i=0;i<m;i++){
		printf("Enter ID nos. of students in C%d:\n",i+1);
		for(int j=0;j<n;j++) scanf("%d",&arr[i][j]);
	}
}

void sortRows(int arr[][n],int m){
	for(int i=0;i<m;i++)
		for(int j=0;j<n-1;j++)
			for(int k=0;k<n-j-1;k++)
				if(arr[i][k]>arr[i][k+1]){
					int temp=arr[i][k];
					arr[i][k]=arr[i][k+1];
					arr[i][k+1]=temp;
				}
}

int main(){
	int m=5;
	int arr[m][n];
	populateArray(arr,m);
	sortRows(arr,m);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++) printf("%d\t",arr[i][j]);
		printf("\n");
	}
}
