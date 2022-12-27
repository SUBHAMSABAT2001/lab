#include<stdio.h>
#include<stdlib.h>
void firstfit(int blocksize[], int n , int process[], int m);
void bestfit(int blocksize[], int n, int process[], int m);
void worsefit();
int main()
{       
        int blocksize[] = { 100, 500, 200, 300, 400};
        int process[] = { 212, 417, 112, 426};
        int n = sizeof(blocksize) / sizeof(blocksize[0]);
        int m = sizeof(process)/sizeof(process[0]);
	int choice= 0;
	int ync = 0;


        while(1)
        {
                printf("1.first-fit\n2.Best-fit\n3.Worse-fit\n4.Exit");
                printf("\nEnter the choice:-");
                scanf("%d",&choice);

                switch(choice)
                {
                        case 1:
                                firstfit(blocksize, n, process, m);
                                break;
                        case 2:
                                bestfit(blocksize,n,process,m);
                                break;
                        case 3:
                                worsefit();
                                break;
                        default:
                                printf("\nInvalid Choice");
                                
				break;
                }

                printf("\n Do you want to continue:-");
		scanf("%d",&ync);
		if(ync == 0)
		{
			break;
		}else{
			continue;
		}
        }
	return 0;

}

void firstfit(int blocksize[], int n, int process[], int m)
{
	int i, j;
	int allocation[n];
	int rem[m];
	for(i = 0; i<n; i++)
	{
		allocation[i] = -1;
	}

	for(j = 0; j<m;j++)
	{
		rem[j] = blocksize[j];
	}

	for(i= 0; i<n; i++)
	{
		for(j = 0; j<m; j++)
		{
			if(blocksize[j] >= process[i])
			{
				allocation[i] = j;
				blocksize[j] = blocksize[j] - process[i];
			}
		}
	}

	printf("\n Output of the Following Process is:-\n ");
	for(i= 0; i<m; i++)
	{
		printf("Process %d size %d",i, process[i]);
		if(allocation[i] != -1)
		{
			printf(" fits in parition %d ",allocation[i]);
		}else{
			printf(" no contigous memeory allocation available ");
		}
		printf("\n");
	}

	printf("\n Internal Fragmentation");
	for(i= 0; i<m; i++)
	{
		printf("Original Position %d = %d , Remaining : %d k\n ",i+1, blocksize[i], rem[i]-blocksize[i]); 
	}

}
void bestfit(int blocksize[], int n, int process[], int m)
{
     int i,j,rem[n],idx;
	for(i=0;i<n;i++)
		rem[i] = blocksize[i];
	printf("BEST FIT\n");
	for(i=0;i<m;i++){
		idx = -1;
		for(j=0;j<n;j++){
			if (rem[j]>=process[i])
				if (idx==-1)
					idx = j;
				else if(rem[j]<rem[idx])
					idx = j;
		}
		if (idx==-1)
			printf("No contigious memory available for P%d if size %dk\n",i+1,process[i]);
		else{
			printf("P%d of size %dk fits in Partition%d of size %dk\n",i+1,process[i],idx+1,rem[idx]);
			rem[idx] -= process[i];
		}

	}
	printf("\nINTERNAL FRAGMENTTATION\n");
        for(i=0;i<n;i++){
                printf("Original Partition%d = %dk, Remaining = %dk\n",i+1,blocksize[i],rem[i]);
	}
	printf("\n");

	
}
void worsefit()
{
	printf("here worse fit logic will be implemented");
}
