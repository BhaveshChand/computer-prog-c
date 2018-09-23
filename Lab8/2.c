#include<stdio.h>
int reverse(int num){
	int a[10],i=0,rev=0;
	do{
		a[i]=num%10;
		num/=10;
		i++;
	}while(num!=0);
	int pv=1;
	for(i=i-1;i>=0;i--){
		rev+=a[i]*pv;
		pv*=10;
	}
	return rev;
}
void main(){
	int num;
	printf("Enter number to reverse: ");
	scanf("%d",&num);
	printf("Reversed number is %d.\n",reverse(num));
}