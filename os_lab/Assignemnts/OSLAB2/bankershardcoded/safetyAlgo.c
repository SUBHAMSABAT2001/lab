#include<stdio.h>
int main(){
	int maxnd[10][10]={{7,5,3},{3,2,2},{9,0,2},{2,2,2},{4,3,3}};
	int currHold[10][10]={{0,1,0},{2,0,0},{3,0,2},{2,1,1},{0,0,2}};
	int need[10][10];
	int totalAlloc=12;
	int available[3]={3,3,2};
	int size=5,i,j;
	int np=3;
	printf("Process\tMax need\tCurrent Holding\n");
	for(i=0;i<size;i++){
		for(j=0;j<np;j++){
			need[i][j]=maxnd[i][j]-currHold[i][j];
		}
		printf("P%d\t%d %d %d\t%d %d %d\n",i,maxnd[i][0],maxnd[i][1],maxnd[i][2],currHold[i][0],currHold[i][1],currHold[i][2]);
	}
	int count=size;
	int sequence[10];
	int ind=0;
	while(count){
		for(i=0;i<=size;i++){
			if(i==size){
				printf("NO safety sequence\n");
				return;
			}
			if((need[i][0]!=0||need[i][1]!=0||need[i][2]!=0)&&need[i][0]<=available[0]&&need[i][1]<=available[1]&&need[i][2]<=available[2]){
				need[i][0]=0;
				need[i][1]=0;
				need[i][2]=0;
				count--;
				available[0]+=currHold[i][0];
				available[1]+=currHold[i][1];
				available[2]+=currHold[i][2];
				sequence[ind]=i;
				ind++;
				break;
			}
			
		}
	}
	printf("The safety sequence is:\n");
	for(i=0;i<size;i++){
		printf("P%d\t",sequence[i]);
	}
	return;
}

