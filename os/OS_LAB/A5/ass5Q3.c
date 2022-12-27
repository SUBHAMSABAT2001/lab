#include<stdio.h>
#include<sys/types.h>
int main()
{
	int sum, mul, pid,i,j,row,col, matrix1[10][10],matrix2[10][10];
	printf("\n Enter the no of Rows:-");
	scanf("%d",&row);
	printf("\n Enter the no of cols:-");
	scanf("%d",&col);
	printf("\n Enter the values of the matrix:-");
	for(i=0; i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&matrix1[i][j]);
		}
	}

	printf("\n Enter the values of second matrix:-");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++)
		{
			scanf("%d",&matrix2[i][j]);
		}
	}

	if(pid == 0)
	{
		for(i=0; i<row;i++)
		{
			for(j=0;j<col;j++){
				sum = matrix1[i][j] + matrix2[i][j];
				printf("%d ",sum);
			}
		}
	}

	else if(pid > 0){
		if(row != col){
			printf("\n Matrix multiply not possible");
		}

		for(i=0; i<row; i++)
		{
			for(j=0; j<col; j++)
			{
				mul = matrix1[i][j] * matrix2[j][i];
				printf("%d",mul);
			}

		}
	
	}
	else{
		printf("\n Error ocuured\n");
		return -1;
	}



}
