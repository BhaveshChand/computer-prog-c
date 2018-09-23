#include<stdio.h>
#include<string.h>
#define MAX 100

void main(){
	char str[MAX];
	printf("Enter a line: ");
	//gets(str);
	scanf("%[^\n]s",str);
	int len=strlen(str);
	char rev[len+1];
	rev[len]=0;
	int i=0;
	while(str[i]!=0){
		int j=0;
		while(str[i]!=0&&str[i]!=' '){
			j++;
			i++;
		}
		rev[len-j-1]=' ';
		for(;j>0;j--){
			rev[len-j]=str[i-j];
		}
		i++;
		len-=j+1;
	}
	printf("String with reversed words is: %s");
}