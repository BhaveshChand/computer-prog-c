#include<stdio.h>

int isdigit(char c){
	if(c>=48&&c<=57) return 1;
	return 0;
}

int islower(char c){
	if(c>=97&&c<=122) return 1;
	return 0;
}

int isalpha(char c){
	if((c>=97&&c<=122)||(c>=65&&c<=90)) return 1;
	return 0;
}

int isspace(char c){
	if(c==32) return 1;
	return 0;
}

int isupper(char c){
	if(c>=65&&c<=90) return 1;
	return 0;
}

char toupper(char c){
	if(c>=97&&c<=122) return c-32;
	return c;
}

char tolower(char c){
	if(c>=65&&c<=90) return c+32;
	return c;
}

char *strcpy(char *dest,char *src){
	int i=0;
	while(*(src+i)!=0){
		*(dest+i)=*(src+i);
		i++;
	}
	*(dest+i)=0;
	return dest;
}

char *strcat(char *dest,char *src){
	int i=0,j=0;
	while(*(dest+i)!=0) i++;
	while(*(src+j)!=0){
		*(dest+i+j)=*(src+j);
		j++;
	}
	*(dest+i+j)=0;
	return dest;
}

int strlen(char *str){
	int i=0;
	while(*(str+i)!=0) i++;
	return i;
}

void main(){
	char str1[100]="This is a lovely day.";
	char str2[100]="I'd like to play today.";
	printf("%d %d ",strlen(str1),strlen(str2));
	printf("%d ",isdigit(*(str1+5)));
	printf("%d ",isdigit('5'));
	printf("%d ",islower(*(str1+5)));
	printf("%d ",islower(*str1));
	printf("%d ",isalpha(*(str1+5)));
	printf("%d ",isalpha(*str1));
	printf("%d ",isspace(*(str1+5)));
	printf("%d ",isspace(*(str1+4)));
	printf("%d ",isupper(*(str1+5)));
	printf("%d ",isupper(*str1));
	printf("%c ",toupper(*(str1+3)));
	printf("%c ",toupper(*str1));
	printf("%c ",tolower(*str1));
	printf("%c\n",tolower(*(str1+3)));
	puts(strcpy(str1,"Very much so."));
	printf("\n");
	puts(strcpy(str1,str2));
	printf("\n");
	puts(strcat(str1,"Cricket."));
	printf("\n");
	puts(strcat(str2,str1));
	printf("%d %d",strlen(str1),strlen(str2));
}