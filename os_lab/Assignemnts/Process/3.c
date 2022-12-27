#include<stdio.h>
int main(){
	int n,c;
	printf("Enter number of rows:");
	scanf("%d",&n);
	printf("Enter number of cols:");
	scanf("%d",&c);
	int i,j,a[n][n],add[n][n],mul[n][n],b[n][n];
	printf("Enter the values of matrix 1:\n");
	for(i=0;i<n;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the values of matrix 2:\n");
	for(i=0;i<n;i++){
		for(j=0;j<c;j++){
			scanf("%d",&b[i][j]);
		}
	}
	int pid=fork();
	if(pid==0){
		for(i=0;i<n;i++){
			for(j=0;j<c;j++){
				add[i][j]=a[i][j]+b[i][j];
			}
		}
	}
	else if(pid>0){
		wait();
		for(i=0;i<n;i++){
			for(j=0;j<c;j++){
				mul[i][j]=0;
				int k;   
				for(k=0;k<c;k++)    
				{    
					mul[i][j]+=a[i][k]*b[k][j];    
				}    
			}
		}
	}
	else{
		printf("error!\n");
		return -1;
	}
	printf("Addition Matrix is: \n");
	for(i=0;i<n;i++){
		for(j=0;j<c;j++){
			printf("%d ",add[i][j]);
		}
		printf("\n");
	}
	printf("Multiplication Matrix is: \n");
	for(i=0;i<n;i++){
		for(j=0;j<c;j++){
			printf("%d ",mul[i][j]);
		}
		printf("\n");
	} return 0;
}
