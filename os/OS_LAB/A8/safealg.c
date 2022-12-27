#include<stdio.h>
void main(){
	int i,j,m,n;
	int need[5][3];
	int max[5][3]={{7,5,3},{3,2,2},{9,0,2},{2,2,2},{4,3,3}};
	int all[5][3]={{0,1,0},{2,0,0},{3,0,2},{2,1,1},{0,0,2}};
	int avail[3]={3,3,2};
	printf("Need\n");
	for (i=0;i<5;i++){
		for(j=0;j<3;j++){
			need[i][j]=max[i][j]-all[i][j];
			printf("%d\t",need[i][j]);
		}
		printf("\n");
	}
	int f[5],p[5],i1=0,flag=0,k;
	for(i=0;i<5;i++)
		f[i]=0;
	for(k=0;k<5;k++){
	for(i=0;i<5;i++){
		flag=0;
	for(j=0;j<3;j++){
		if(f[i]==0){
			if(need[i][j]>avail[j]){
				flag=1;
				break;
			}
		}
	}
	if(flag==0){
		p[i1++]=i;
		for(j=0;j<3;j++){
			avail[j]=avail[j]+all[i][j];
		}
		f[i]=1;
	}
	}
	}
	for (i=0;i<4;i++){
		printf("p%d ",p[i]);
	}
	printf("p2");
}
