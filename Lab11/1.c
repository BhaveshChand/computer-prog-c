#include<stdio.h>
#include<stdlib.h>

struct text_book{
	char name[10];
	int bid;
	float price;
	int numaut;
	char autlist[5][10];
};
struct class{
	int no_books;
	struct text_book *booklist;
};
typedef struct class std;

void read_classInfobyRef(std *s,int cl_no,int nb){
	(s+cl_no)->no_books=nb;
	(s+cl_no)->booklist=(struct text_book *)malloc(nb*sizeof(struct text_book));
	for(int i=0;i<nb;i++){
		printf("Enter name of book %d: ",i+1);
		scanf("%[^\n]s",(((s+cl_no)->booklist)[i]).name);
		printf("Enter book ID no.: ");
		scanf("%d",(((s+cl_no)->booklist)[i]).bid);
		printf("Enter price of book: ");
		scanf("%f",(((s+cl_no)->booklist)[i]).price);
		printf("Enter no. of authors: ");
		scanf("%d",(((s+cl_no)->booklist)[i]).numaut);
		for(int j=0;j<((((s+cl_no)->booklist)[i]).numaut);j++){
			printf("Enter name of author %d: ",j+1);
			scanf("%[^\n]s",((((s+cl_no)->booklist)[i]).autlist)[j]);
		}
	}
}

void print_classInfo(std s,int cl_no){
	printf("Printing all information of Standard %d\n",cl_no);
	for(int i=0;i<s.no_books;i++){
		printf("Book %d: \n\tName: %s, Book ID: %d, Price: %f",i+1,((s.booklist)[i]).name,((s.booklist)[i]).bid,((s.booklist)[i]).price);
		for(int j=0;j<(((s.booklist)[i]).numaut);j++){
			printf(", Author %d: %s",j+1,(((s.booklist)[i]).autlist)[j]);
		}
		printf("\n");
	}
}

std read_classInfobyVal(std s,int cl_no,int nb){
	s.no_books=nb;
	s.booklist=(struct text_book *)malloc(nb*sizeof(struct text_book));
	for(int i=0;i<nb;i++){
		printf("Enter name of book %d: ",i+1);
		scanf("%[^\n]s",((s.booklist)[i]).name);
		printf("Enter book ID no.: ");
		scanf("%d",((s.booklist)[i]).bid);
		printf("Enter price of book: ");
		scanf("%f",((s.booklist)[i]).price);
		printf("Enter no. of authors: ");
		scanf("%d",((s.booklist)[i]).numaut);
		for(int j=0;j<(((s.booklist)[i]).numaut);j++){
			printf("Enter name of author %d: ",j+1);
			scanf("%[^\n]s",(((s.booklist)[i]).autlist)[j]);
		}
	}
	return s;
}

void print_allInfo(std *s, int nc){
	printf("Printing information of all classes\n\n");
	for(int i=0;i<nc;i++){
		print_classInfo(s[i],i);
		printf("\n");
	}
}

void main(){
	int nc,ns,i,j;
	std *s;
	printf("enter number of classes\n");
	scanf("%d",&nc);
	s=(std *)malloc(nc*sizeof(std));
	for(i=1;i<=nc;i++){
		printf("enter number of text_books for %d standard\n",i);
		scanf("%d",&ns);
		read_classInfobyRef(s,i,ns);
		//s[i]=read_classInfobyVal(s[i],i,ns);
	}
	for(i=1;i<=nc;i++){
		print_classInfo(s[i],i);
	}
	print_allInfo(s,nc);
}