#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int readinput(char *lines[]){
	char another='y',sentence[100];
	int i=0;
	while(another=='y'){
		printf("Enter a line: ");
		gets(sentence);
		lines[i]=(char *)malloc(strlen(sentence)+1);
		strcpy(lines[i],sentence);
		//printf("%s",sentence);
		printf("Want to enter another line?(y/n): ");
		scanf(" %c",&another);
		getchar();
		i++;
	}
	return i;
}

void searchword(char *lines[],int number,char *word,int flag[]){
	int i=0,j=0,k=0;
	char temp[20];
	for(i=0;i<number;i++){
		flag[i]=0;
		j=0;
		while(lines[i][j]!='\0'){
			while(lines[i][j]!=' ' && lines[i][j]!='\0')
				temp[k++]=lines[i][j++];
			temp[k]='\0';
			if(strcmp(temp,word)==0){
				flag[i]=1;
				break;
			}
			if(lines[i][j]==' ') j++;
			k=0;
		}
	}
}

void printlines(char *lines[],int number,int flag[]){
	for(int i=0;i<number;i++){
		if(flag[i]) printf("%s\n",lines[i]);
	}
}

void main(){
	char *lines[100],word[20];
	int number=readinput(lines);	
	int i=0,j=0,flag[number];
	printf("Enter the word to search: ");
	scanf("%s",word);
	searchword(lines,number,word,flag);
	printf("Lines containing the word %s are:\n",word);
	printlines(lines,number,flag);
}