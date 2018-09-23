#include <stdio.h>
//#include <string.h>

int compare(char *str1,char *str2){
	int i=0;
	while(str1[i]!='\0' && str2[i]!='\0'){
		if(str1[i]!=str2[i]) return (str1[i]-str2[i]);
		i++;
	}
	if(str1[i]=='\0') return (-str2[i]);
	else return str1[i];
}

int main(){
	char sentence[100],word[20],temp[20];
	int i=0,j=0,occurences=0;
	printf("Enter a sentence: ");
	gets(sentence);
	printf("Enter the word to be search: ");
	gets(word);
	//printf("%d %d",strcmp(sentence,word),compare(sentence,word));
	while(sentence[i]!='\0'){
		while(sentence[i]!=' ' && sentence[i]!='\0')
			temp[j++]=sentence[i++];
		temp[j]='\0';
		if(compare(temp,word)==0) occurences++;
		if(sentence[i]==' ') i++;
		j=0;
	}
	printf("Number of occurences of word are %d.\n",occurences);
	return 0;
}
