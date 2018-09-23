#include<stdio.h>
#include<stdlib.h>
#define showcase_size 10 //Number of TB's which can be accommodated in the showcase.

typedef enum {PINK=5,BROWN,WHITE} color; // Three colors of TB's
typedef struct{
	int bear_id;
	float bear_cost;
	color bear_color;
} teddy_bear; //Information about a TB
typedef struct node{
	teddy_bear tb;
	struct node *next;
} NODE;
typedef struct node *Link; // Node of a Linked List
typedef struct{
	NODE *first;
	int size;
} LIST; // Represent a Linked List

LIST createEmpty(){
	LIST *s=(LIST *)malloc(sizeof(LIST));
	s->first=NULL;
	s->size=0;
	return *s;
}

teddy_bear createTB(){
	teddy_bear t;int c;
	printf("Enter Teddy Bear's ID no.: ");
	scanf("%d",t.bear_id);
	printf("Enter Teddy Bear's cost: ");
	scanf("%f",t.bear_cost);
	printf("Enter Teddy Bear's color(Enter 5 if Pink,6 if Brown or 7 if White): ");
	scanf("%d",c);
	t.bear_color=(color)c;
	return t;
}

void printList(LIST l){
	Link temp=l.first;
	int i=1;
	while(temp!=NULL){
		printf("Bear %d:- ID=%d, Cost=%f, Color=",i,(temp->tb).bear_id,(temp->tb).bear_cost);
		switch((temp->tb).bear_color){
			case PINK: printf("Pink\n"); break;
			case BROWN: printf("Brown\n"); break;
			case WHITE: printf("White\n"); break;
		}
		i++;
		temp=temp->next;
	}
}

LIST insFirst(LIST l,teddy_bear t){
	Link n=(Link)malloc(sizeof(NODE));
	n->tb=t;
	n->next=l.first;
	l.first=n;
	l.size++;
	return l;
}

LIST delLast(LIST l){
	Link temp=l.first;
	if(temp==NULL) return l;
	if(temp->next==NULL){
		l.first=NULL;
		l.size=0;
		return l;
	}
	while(temp->next->next!=NULL) temp=temp->next;
	free(temp->next);
	temp->next=NULL;
	l.size--;
	return l;
}

LIST newTB(LIST l,teddy_bear t){
	l=insFirst(l,t);
	if(l.size>showcase_size) l=delLast(l);
	return l;
}

int sameCol(LIST l,color c){
	int count=0;
	Link temp=l.first;
	while(temp!=NULL){
		if((temp->tb).bear_color==c) count++;
	}
	return count;
}

LIST insSort(LIST l,teddy_bear t){
	if(l.first==NULL){
		insFirst(l,t);
		return l;
	}
	Link prev=NULL,temp=l.first;
	Link n=(Link)malloc(sizeof(NODE));
	n->tb=t;
	while(temp!=NULL){
		if((temp->tb).bear_color>=t.bear_color) break;
		prev=temp;
		temp=temp->next;
	}
	n->next=temp;
	if(prev==NULL) l.first=n;
	else prev->next=n;
	l.size++;
	return l;
}

LIST delete(LIST l,teddy_bear t){
	if(l.first==NULL) return l;
	Link prev=NULL,temp=l.first;
	while(temp!=NULL){
		if(((temp->tb).bear_id==t.bear_id)&&((temp->tb).bear_cost==t.bear_cost)&&((temp->tb).bear_color==t.bear_color)) break;
		prev=temp;
		temp=temp->next;
	}
	if(temp==NULL) return l;
	else{
		if(prev==NULL) l.first=temp->next;
		else prev->next=temp->next;
		free(temp);
		l.size--;
		return l;
	}
}

teddy_bear *popArray(char *fname,int *nor){
	FILE *fp=fopen(fname,"rb");
	if(fp==NULL) return NULL;
	fread(nor,sizeof(int),1,fp);
	teddy_bear *arr=(teddy_bear *)malloc((*nor)*sizeof(teddy_bear));
	fread(arr,sizeof(teddy_bear),*nor,fp);
	fclose(fp);
	return arr;
}

int notShow(teddy_bear arr[],int *nor,LIST l){
	int count=0;
	for(int i=0;i<*nor;i++){
		Link temp=l.first;
		int flag=0;
		while(temp!=NULL){
			if(((temp->tb).bear_id==arr[i].bear_id)&&((temp->tb).bear_cost==arr[i].bear_cost)&&((temp->tb).bear_color==arr[i].bear_color)){
				flag++;
				break;
			}
			temp=temp->next;
		}
		if(!flag){
			count++;
			printf("Color of Teddy Bear %d not showcased is ",i);
			switch(arr[i].bear_color){
				case PINK: printf("Pink.\n");
				case BROWN: printf("Brown.\n");
				case WHITE: printf("White.\n");
			}
		}
	}
	return count;
}

void printListRev(Link head){
	if(head->next!=NULL) printListRev(head->next);
	printf("Teddy Bear's ID=%d\n",(head->tb).bear_id);
}

void main(){
	
}