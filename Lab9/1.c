#include<stdio.h>

void quad_print(float x_coor[],float y_coor[],int n){
	for(int i=0;i<n;i++){
		if(x_coor[i]>0){
			if(y_coor[i]>0) printf("Point %d lies in 1st quadrant.\n",i+1);
			else if(y_coor[i]<0) printf("Point %d lies in 4th quadrant.\n",i+1);
			else printf("Point %d lies on +ve x-axis.\n",i+1);
		}
		else if(x_coor[i]<0){
			if(y_coor[i]>0) printf("Point %d lies in 2nd quadrant.\n",i+1);
			else if(y_coor[i]<0) printf("Point %d lies in 3rd quadrant.\n",i+1);
			else printf("Point %d lies on -ve x-axis.\n",i+1);
		}
		else{
			if(y_coor[i]>0) printf("Point %d lies on +ve y-axis.\n",i+1);
			else if(y_coor[i]<0) printf("Point %d lies on -ve y-axis.\n",i+1);
			else printf("Point %d is origin.\n",i+1);
		}
	}
}

void quad_store(float x_coor[],float y_coor[],int quad[],int n){
	for(int i=0;i<n;i++){
		if(x_coor[i]>0){
			if(y_coor[i]>0) quad[i]=1;
			else if(y_coor[i]<0) quad[i]=4;
			else quad[i]=0;
		}
		else if(x_coor[i]<0){
			if(y_coor[i]>0) quad[i]=2;
			else if(y_coor[i]<0) quad[i]=3;
			else quad[i]=0;
		}
		else quad[i]=0;
		if(quad[i]) printf("Point %d lies in quadrant %d.\n",i+1,quad[i]);
		else printf("Point %d lies on one of the axes.\n",i+1);
	}
}

void main(){
	float x_coor[]={1,-1,-1,1,1,0,-1,0,0};
	float y_coor[]={1,1,-1,-1,0,1,0,-1,0};
	int quad[9];
	quad_print(x_coor,y_coor,9);
	quad_store(x_coor,y_coor,quad,9);
}
