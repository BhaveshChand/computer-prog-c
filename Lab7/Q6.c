#include<stdio.h>
void main(){
	int m,n,i,j,c;
	printf("Enter m: ");
	scanf("%d",&m);
	printf("Enter n: ");
	scanf("%d",&n);
	int a[m][n];
	printf("Enter elements strictly in sorted order:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("2D array is:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	int ele;
	printf("Enter element to search: ");
	scanf("%d",&ele);
	for(i=0;i<m;i++){
		if(a[i][0]<=ele) c=i;
	}
	int low=0,high=n-1,mid,flag=0;
	while(low<=high){
		mid=(low+high)/2;
		if(ele==a[c][mid]){
			flag=1;
			break;
		}
		else if(ele<a[c][mid]) high=mid-1;
		else low=mid+1;
	}
	if(flag) printf("Given element found at row %d and column %d.",c+1,mid+1);
	else printf("Element not found.");
}