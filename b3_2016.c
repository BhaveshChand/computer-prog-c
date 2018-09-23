#include<stdio.h>
void main(){
	int n,i,j,e;	//Part a start
	printf("Enter no. of elective courses done by student: ");
	scanf("%d",&n);
	int elec[n][3];
	for(i=0;i<n;i++){
		printf("Enter code for elective %d: ",i+1);
		scanf("%d",&e);
		for(j=2;j>=0;j--){
			elec[i][j]=e%10;
			e/=10;
		}
	}	//Part a end
	
	int sum=0;	//Part b start
	float avg;
	for(i=0;i<n;i++){
		sum+=elec[i][1];
	}
	avg=(float)sum/n;
	printf("Following courses have units >= average units:\n");
	for(i=0;i<n;i++){
		if(elec[i][1]>=avg){
			printf("Course Number: %d\n",elec[i][0]);
		}
	}	//Part b end
	
	int max=0;	//Part c start
	for(i=0;i<n;i++){
		if((elec[i][2]==3||elec[i][2]==5||elec[i][2]==6||elec[i][2]==7)&&(elec[i][1]>max)){
			max=elec[i][1];
		} 
	}
	printf("Following open electives have maximum units:\n");
	for(i=0;i<n;i++){
		if((elec[i][2]==3||elec[i][2]==5||elec[i][2]==6||elec[i][2]==7)&&(elec[i][1]==max)){
			printf("Course Number: %d\n",elec[i][0]);
		}
	}	//Part c end
}