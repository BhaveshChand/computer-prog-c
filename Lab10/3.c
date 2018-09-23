#include<stdio.h>

int check(char no[]){
	int i,count=0;
	for(i=0;i<15;i++)
		if(no[i]=='-') count++;
	if((!(no[0]=='+'&&no[1]=='9'&&no[2]=='1'&&no[3]=='-'))||count>2) return -1;
	else return count;
}

void main(){
	char no[16];
	int i;
INPUT:	printf("Enter a phone no.: ");
	gets(no);
	int dash=check(no);
	if(dash==-1){
		printf("Invalid Input\n");
		goto INPUT;
	}
	i=4;
	if(dash==2){
		printf("\nCity Code: ");
		while(no[i]!='-'){
			printf("%c",no[i]);
			i++;
		}
		i++;
	}
	printf("\nActual Phone No.: ");
	while(no[i]!=0){
		printf("%c",no[i]);
		i++;
	}
}
