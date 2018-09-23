#include<stdio.h>
#include<math.h>
int root(int a,int b,int c,float *r1,float *r2){
	int D;
	D=b*b-4*a*c;
	if(D<0) return 0;
	else if(D==0) *r1=*r2=(-b/(2*a));
	else{
		*r1=(-b+sqrt(D))/(2*a);
		*r2=(-b-sqrt(D))/(2*a);
	}
	return 1;
}
void main(){
	int flag,a,b,c;
	float r1,r2;
	printf("Enter a,b and c for ax^2+bx+c=0\n");
	scanf("%d%d%d",&a,&b,&c);
	flag=root(a,b,c,&r1,&r2);
	if(flag) printf("%dx^2+%dx+%d=0 has real roots.\n1st root=%f\n2nd root=%f\n",a,b,c,r1,r2);
	else printf("%dx^2+%dx+%d=0 has imaginary roots.\n",a,b,c);
}