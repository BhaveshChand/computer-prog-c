#include<stdio.h>
int main()
{
	float u,a,t,d;
	printf("Enter Initial velocity, acceleration, time travelled");
	scanf("%f%f%f",&u,&a,&t);
	d=u*t+a*t*t/2;
	printf("Total distance travelled is %f",d);
	return 0;

}
