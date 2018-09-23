#include<stdio.h>
int main()
{
	int a,b,c,area;
	printf("Enter the lenghts of three sides of a triangle: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a+b>c && b+c>a && a+c>b) 
	{
		area=(a+b+c)/2;
		printf("Area of triangle is %d.\n",area);
	}
	else printf("Such a triangle is not possible.\n");
	return 0;
}
