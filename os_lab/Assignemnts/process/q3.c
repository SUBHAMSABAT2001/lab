#include<stdio.h>
#include<sys/types.h>
int main() {
	int n,i,j,mat1[20],mat2[20],pid;
	printf("Enter size of the square matrix: ");
	scanf("%d",&n);
	
	printf("Enter elements of the matrix1 : \n");
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter the elements of the matrix2 : \n");
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			scanf("%d",&mat2[i][j]);
		}
	}	
	pid = fork();
	if(pid==0) {
		int sum[n][n];
		for(i=0; i<n; i++) {
			for(j=0; j<n; j++) {
				sum[i][j] = mat1[i][j]+mat2[i][j];
			}
			printf("\n");
		}
	}
	else {
		printf("multiply of the matrix=\n");    
		for(i=0;i<r;i++)    
		{    
			for(j=0;j<c;j++)    
			{    
				mul[i][j]=0;    
				for(k=0;k<c;k++)    
				{    
					mul[i][j]+=a[i][k]*b[k][j];    
				}    
			}    
		}    
		   
		for(i=0;i<r;i++)    
		{    
			for(j=0;j<c;j++)    
			{    
				printf("%d\t",mul[i][j]);    
			}    
		printf("\n"); 
		}
	}
	return 0;
}   

