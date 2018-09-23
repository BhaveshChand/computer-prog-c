#include <stdio.h>

void main(){
	char *col[]={"Red","Blue"};
	int i,j;
	for(i=0;i<2;i++){
		printf("%d\n",*(col+i));
		j=0;
		while(*(*(col+i)+j)!='\0'){
			printf("%c",*(*(col+i)+j));
			j++;
		}
		printf("\n");
	}
}
