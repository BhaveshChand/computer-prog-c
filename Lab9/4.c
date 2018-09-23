#include<stdio.h>

void populateMarksArray(float arr[][7],int n){
	for(int i=0;i<n;i++){
		printf("Enter marks of student %d:\n",i+1);
		arr[i][0]=i+1;
		for(int j=1;j<6;j++) scanf("%f",&arr[i][j]);
		arr[i][6]=0;
	}
}

void computeTotal(float arr[][7],int n){
	for(int i=0;i<n;i++)
		for(int j=1;j<6;j++) arr[i][6]+=arr[i][j];
}

float computeClassAverage(float arr[][7],int n){
	float sum=0;
	for(int i=0;i<n;i++) sum+=arr[i][6];
	return sum/n;
}

int computeMaxTotal(float arr[][7],int n){
	float max=arr[0][6];
	int k=0;
	for(int i=1;i<n;i++)
		if(arr[i][6]>max){
			max=arr[i][6];
			k=i;
		}
	return (int)arr[k][0];
}

int main(){
	int n=10;
	float arr[n][7];
	populateMarksArray(arr,n);
	computeTotal(arr,n);
	/*for(int i=0;i<n;i++){
		for(int j=0;j<7;j++) printf("%f\t",arr[i][j]);
		printf("\n");
	}*/
	printf("Class Average=%f\n",computeClassAverage(arr,n));
	printf("ID of topper is %d.\n",computeMaxTotal(arr,n));
}
