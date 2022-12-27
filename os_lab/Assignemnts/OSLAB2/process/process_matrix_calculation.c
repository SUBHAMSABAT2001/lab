#include<stdio.h>
#include<sys/types.h>
int main(){
	int a[100][100], b[100][100], sum[100][100], mul[100][100], pid, i, j, k, r;
	printf("Rows & Columns of Matrix: ");
	scanf("%d", &r);
	//Input of Matrix 1
	printf("Input for Matrix A\n");
	for (i = 0; i<r; i++){
		for(j = 0; j<r; j++){
			scanf("%d", &a[i][j]);
		}
	}
	//Input of Matrix 2
	printf("Input for Matrix B\n");
	for (i = 0; i<r; i++){
		for(j = 0; j<r; j++){
			scanf("%d", &b[i][j]);
		}
	}
	
	//Print Matrix 1
	printf("Input for Matrix A\n");
	for (i = 0; i<r; i++){
		for(j = 0; j<r; j++){
			printf("%d", a[i][j]);
		}
		printf("\n"); 
	}
	//Print Matrix 2
	printf("Input for Matrix B\n");
	for (i = 0; i<r; i++){
		for(j = 0; j<r; j++){
			printf("%d", b[i][j]);
		}
		printf("\n"); 
	}
	
	pid = fork();
	if(pid==0){
		printf("Child Process\n");
		for (i = 0; i < r; i++){  
        	for (j = 0; j < r; j++){  
           		sum[i][j] += a[i][j] + b[i][j];  
            	printf("%d\t", sum[i][j]);  
      		}  
       		printf("\n");  
    	}
    }
    else{
    	printf("Parent Process\n");
    	for(i=0;i<r;i++){    
            for(j=0;j<r;j++){
                // Multiplying i’th row with j’th column
                for(k=0;k<r;k++)    
                {    
                    mul[i][j]+=a[i][k]*b[k][j];    
                } 
            }    
        }     
        for(i=0;i<r;i++)    
        {    
            for(j=0;j<r;j++)    
            {    
                printf("%d\t",mul[i][j]);    
            }    
            printf("\n");    
        } 
    }
}
		
	
