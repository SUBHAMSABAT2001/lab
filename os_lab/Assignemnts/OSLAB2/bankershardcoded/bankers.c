#include<stdio.h>
int main(){
	int maxnd[10][10]={{7,5,3},{3,2,2},{9,0,2},{2,2,2},{4,3,3}};
	int currHold[10][10]={{0,1,0},{2,0,0},{3,0,2},{2,1,1},{0,0,2}};
	int need[10][10];
	int totalAlloc=12;
	int available[3]={3,3,2};
	int size=5,i,j,k;
	int np=3;
	int finished[10]={0,0,0,0,0,0,0};
	printf("Process\tMax needCurr Holding\tNeed\n");
	for(i=0;i<size;i++){
		for(j=0;j<np;j++){
			need[i][j]=maxnd[i][j]-currHold[i][j];
		}
		printf("P%d\t%d %d %d\t%d %d %d\t%d %d %d\n",i,maxnd[i][0],maxnd[i][1],maxnd[i][2],currHold[i][0],currHold[i][1],currHold[i][2],need[i][0],need[i][1],need[i][2]);
	}
	char op='y';
	int req[10];
	while(op=='y'){
		printf("Enter the process who has a request:");
		scanf("%d",&k);
		printf("Enter the requests:\n");
		scanf("%d %d %d",&req[0],&req[1],&req[2]);
		for(i=0;i<np;i++){
			if(req[i]<=need[k][i]&&req[i]<=available[i]){
				need[k][i]-=req[i];
				available[i]-=req[i];
				currHold[k][i]+=req[i];
			}
			else{
				printf("%d\n",i);
				printf("The available is less than the request\n");
				return;
			}
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
			if(finished[i]==0&&need[i][0]<=available[0]&&need[i][1]<=available[1]&&need[i][2]<=available[2]){
				finished[i]=1;
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
	printf("Process\tneed\tCurrent Holding\n");
	for(i=0;i<size;i++){
		printf("P%d\t%d %d %d\t%d %d %d\n",i,need[i][0],need[i][1],need[i][2],currHold[i][0],currHold[i][1],currHold[i][2]);
	}
	printf("The safety sequence is:\n");
	for(i=0;i<size;i++){
		printf("P%d\t",sequence[i]);
	}
	printf("Do you have more requests:");
	scanf(" %c",&op);
	}
	return;
}

