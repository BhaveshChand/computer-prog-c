#include<stdio.h>
void print(int a[],int n){	//Part b start
	int i=1;
	if(a[0]!=0) printf("%d",a[0]);
	else{
	printf("%dx",a[1]);
		i++;
	}
	for(;i<n;i++){
		if(a[i]!=0) printf(" + %dx^%d",a[i],i);
	}
	printf("\n");
}	//Part b end
void main(){
	int num,temp,i,n=0;	//Part a start
	printf("Enter a number: ");
	scanf("%d",&num);
	temp=num;
	while(temp!=0){
		temp/=10;
		n++;
	}
	int arr[11];
	temp=num;
	for(i=n-1;i>=0;i--){
		arr[i]=temp%10;
		temp/=10;
	}	//Part a end
	
	print(arr,n); //Part b
	
	int c,P=0,var=1;	//Part c start
	printf("Enter c to find P(c): ");
	scanf("%d",&c);
	for(i=0;i<n;i++){
		P+=arr[i]*var;
		var*=c;
	}
	printf("P(%d)=%d\n",c,P);	//Part c end
	
	for(i=n;i>0;i--) arr[i]=c*arr[i-1]; //Part d start
	arr[0]=0;
	n++;
	print(arr,n);	//Part d end
}
