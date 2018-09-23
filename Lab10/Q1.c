#include<stdio.h>
#include<string.h>

void remove_dup(char *str){
	int i=0;
	while(str[i]!=0){
		int j=i+1;
		while(str[j]==str[i]) j++;
		if(j!=i+1) strcpy(str+i+1,str+j);
		i++;
	}
}

void main(){
	char str[100];
	printf("Enter a string: ");
	gets(str);
	remove_dup(str);
	printf("Output string: ");
	puts(str);
}
