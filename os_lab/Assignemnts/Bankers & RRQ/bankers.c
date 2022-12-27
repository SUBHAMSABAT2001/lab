#include<stdio.h>

void main(){
	int n,m;
	printf("Enter number of processes and resources :");
	scanf("%d %d", &n, &m); 
	int avail[m],work[m], need[n][m], max[n][m], alloc[n][m],finish[n], safe[n];
	int i=0,j=0;

	for(i=0;i<n;i++) finish[i]=0;
	printf("Enter available instances of the resources:");
	for(i=0;i<m;i++){
		//printf("Available[%d]:",i+1);
		scanf("%d",&avail[i]);
		work[i]=avail[i];
	}
	printf("Enter max demand of the processes:");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			//printf("Max[%d][%d]:",i+1,j+1);
			scanf("%d", &max[i][j]);
		}
	}
	printf("Enter allocation of the processes:");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			//printf("Allocation[%d][%d]:",i+1,j+1);
			scanf("%d", &alloc[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			need[i][j]=max[i][j]-alloc[i][j];
		}
	}
	int cnt=0;
	while(cnt<n){
		int p=n,flag=0;
		for(i=0;i<n;i++){
			if(finish[i]!=0) continue;
			flag=0;
			for(j=0;j<m;j++){
				if(need[i][j]>work[j]) {
					flag++;
					break;
				}	
			}
			if(flag==0) {
				p=i;
				break;
			}
		}
		if(p==n) {
			int count=0;
			for(i=0;i<n;i++){
				if(finish[i]==0){
					printf("No safe sqequence can be found!\n");
					count++;
					break;
				}
			
			}
			if(count) break;
		}
		for(i=0;i<m;i++){
			work[i]+=alloc[p][i];
		}
		finish[p]++;
		safe[cnt]=p;
		cnt++;
		
	}
	if(cnt==n){
		printf("Safe Sequence: ");
		for(i=0;i<n;i++) printf("P[%d] ",safe[i]);
	}
	
}
