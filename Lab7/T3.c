#include<stdio.h>
int main (void)
{	
	int marks[5][10];
	float stuav[5]={},subav[10]={};
	int i,j;
	for (i=0;i<5;i++)
	{
		printf("Enter the marks of student %d in:\n",i+1);
		for(j=0;j<10;j++)
		{
			printf("Subject %d: ",j+1);
			scanf ("%d",&marks[i][j]);
			stuav[i]+=marks[i][j];
			subav[j]+=marks[i][j];
		}
	}
	for (i=0;i<5;i++)
	{
		stuav[i]/=10.0;
		printf("Average marks of student %d are %f.\n",i+1,stuav[i]);
	}
	for (j=0;j<10;j++)
	{
		subav[j]/=5.0;
		printf("Average marks of subject %d are %f.\n",j+1,subav[j]);
	}
}
