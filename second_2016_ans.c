/****************************************************************************************************************
Implement the following three functions:
1) PTR Add_Node_List(PTR list, player ps)
2) int Best_Team(player tp[], int np, player team[])
3) player Read_Player_Info(player q)
Please read the comments inside the functions for details regarding their functionality.
The following utility function is given to you that can be used for testing:
void Print_List(PTR list)
Note:
1) You have to upload only the three functions implementations in the appropriate boxes on uploading site.
2) You are not suppose to modify any of the structure and typedefinitions given in the question.
3) You can assume all user inputs (where ever applicable) are valid and correct.
**************************************************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

typedef enum {GL=1,DD,KKR,SRH,RPS,MI,KXIP,RCB,WORLDTEAM} team_name;
typedef enum {ROHIT=1,PRAVEEN,DHONI,SMITH,RAINA,GAUTI} player_name;
typedef int match_played;
typedef int highest_score;

typedef struct {
player_name pname;
team_name tname;
match_played mp;
highest_score hs;
} player;

struct node;
typedef struct node NODE;
typedef  NODE* PTR;
struct node {
player p;
PTR link;
};

PTR Add_Node_List(PTR list, player ps) {
/*This function inserts a new node (with player ps in it) in the list if the highest_score of the player ps is greater than atleast one of the existing players highest_score in the list.
The new node should be inserted in the list such that all the nodes in the list are in increasing order with respect to the match_played by the players.     MAX MARKS[30]
This function will have partial marking*/
	int flag=0;
	PTR temp=list;
	while(temp->next!=NULL){
		if(ps.hs>((temp->p).hs)){
			flag=1;
			break;
		}
		temp=temp->next;
	}
	if(ps.hs>((temp->p).hs)){
			flag=1;
	}
	if(flag==1){
		temp=list;
		PTR n1=(PTR)malloc(sizeof(NODE));
		n1->p=ps;
		n1->link=NULL;
		if((temp->p).mp>=ps.mp){
			n1->link=list;
			list=n1;
			return list;
		}
		while(temp->next!=NULL){
			if(((temp->p).mp<ps.mp)&&((temp->next->p).mp>=ps.mp)){
				n1->link=temp->next;
				temp->next=n1;
				return list;
			}
			else temp=temp->next;
		}
		if((temp->p).mp<ps.mp)){
			temp->next=n1;
			return list;
		}
	}
}
int Best_Team(player tp[], int np, player team[]) {
/* A player is a star player if he has played more than 100 matches and his highest score is greater than and equal to 100.
This function finds and copies all the star players from tp[] to team[]. The tp[] contains np number of players.
Change the team name for every star player in team[] to WORLDTEAM (as defined at the top in team_name).
The function returns the number of players that had been copied from tp[] to team[].    MAX MARKS[12.5]
This function has binary grading (either 0 or 12.5M) */
	int i=0,j=0;
	for(;i<np;i++){
		if(tp[i].mp>100&&tp[i].hs>=100){
			team[j]=tp[i];
			j++;
		}
	}
	for(int i=j-1;i>=0;i--){
		team[j].tname=WORLDTEAM;
	}
	return j;
}

player Read_Player_Info(player q) {
/* This function takes the details of player q as user input and returns the player q.
Read the details in the following order: player name, team name, match played, and highest score. MAX MARKS[10]
This function has binary grading (either 0 or 10M) */
	int n;
	printf("Enter int correspondng to player name (ROHIT=1,PRAVEEN=2,DHONI=3,SMITH=4,RAINA=5,GAUTI=6) : ");
	scanf("%d",&n);
	q.pname=(player_name)n;
	printf("Enter int correspondng to team name (GL=1,DD=2,KKR=3,SRH=4,RPS=5,MI=6,KXIP=7,RCB=8,WORLDTEAM=9) : ");
	scanf("%d",&n);
	q.tname=(team_name)n;
	printf("Enter no. of matches played: ");
	scanf("%d",&q.mp);
	printf("Enter highest score: ");
	scanf("%d",&q.hs);
	return q;
}


void Print_List(PTR list) {
PTR t;
t=list;
while(t!= NULL) {
printf("(%d %d %d %d)-->",t->p.pname,t->p.tname, t->p.mp, t->p.hs);
t=t->link;
}
printf("NULL");
}

int main() {
/* Here you can declare appropriate variables, do initializations and function calls to test your function implementations */


}