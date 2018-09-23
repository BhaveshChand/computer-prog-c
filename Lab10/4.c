#include<stdio.h>
#include<string.h>
#define MAX 100

int checkfind(char str[],char find[],int i){
	int j=0;
	while(find[j]!=0){
		if(str[i+j]!=find[j]) return 0;
		j++;
		//printf("h");
		//fflush(stdout);
	}
	return 1;
}

void replacestr(char str[],char replace[],int i){
	int j=0;
	while(replace[j]!=0){
		str[i+j]=replace[j];
		j++;
	}
}

void main(){
	char str[MAX],find[MAX],replace[MAX];
	printf("Enter a string: ");
	gets(str);
	printf("Enter string to search for: ");
	gets(find);
	int len=strlen(find);	//printf("%d",len);
INPUT:	printf("Enter string to replace it with: ");
	gets(replace);
	if(len!=strlen(replace)){
		printf("Length of replacing string should be equal to length of string to find.\n");
		goto INPUT;
	}
	int flag=0;
	for(int i=0;i<=strlen(str)-len;i++){
		if(checkfind(str,find,i)){
			flag++;	//printf("Found");
			replacestr(str,replace,i);
			i+=len-1;
		}
	}
	if(flag) printf("Modified string is: %s\n",str);
	else printf("String not found.");
}	
