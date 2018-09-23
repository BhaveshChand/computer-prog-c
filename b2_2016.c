#include<stdio.h>
void main(){
	int num,ans_key[8],i,j;	//Part a start
	printf("Enter correct answers: ");
	scanf("%d",&num);
	for(i=7;i>=0;i--){
		ans_key[i]=num%10;
		num/=10;
	}	//Part a end
	
	int stud[10][8];	//Part b start
	for(i=0;i<10;i++){
		printf("Enter answers of student %d: ",i+1);
		scanf("%d",&num);
		for(j=7;j>=0;j--){
			stud[i][j]=num%10;
			num/=10;
		}
	}	//Part b end
	
	int q7=0;	//Part c start
	for(i=0;i<10;i++){
		if(ans_key[6]==stud[i][6]) q7++;
	}
	printf("%d students attempted Q7 correctly.\n",q7);	//Part c end
	
	int marks[10]={};	//Part d start
	for(i=0;i<10;i++){
		for(j=0;j<8;j++){
			if(ans_key[j]==stud[i][j]) marks[i]+=4;
			else marks[i]-=1;
		}
		printf("Marks of student %d are %d.\n",i+1,marks[i]);
	}	//Part d end
}