#include <stdio.h>
#include <string.h>

int main(){
	char sentence[100],word[20],temp[20];
	int i=0,j=0,occurences=0;
	printf("Enter a sentence: ");
	gets(sentence);
	printf("Enter the word to be search: ");
	gets(word);
	while(sentence[i]!='\0'){
		while(sentence[i]!=' ' && sentence[i]!='\0')
			temp[j++]=sentence[i++];
		temp[j]='\0';
		if(strcmp(temp,word)==0) occurences++;
		if(sentence[i]==' ') i++;
		j=0;
	}
	printf("Number of occurences of word are %d.\n",occurences);
	return 0;
}
