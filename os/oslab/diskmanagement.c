#include<stdio.h>
#include<stdlib.h>
int less, more;
int larr[less], marr[more];
void fcfs(int arr[], int head, int size);
void sstf(int arr[], int head, int size);
void sort(int arr[], int size);
int main()
{	
	int arr[] = {98, 183, 37, 122, 14, 124, 65, 67};
	int size = sizeof(arr)/ sizeof(arr[0]);
	int head = 53;
	int choice= 0;
	int ync = 0;


        while(1)
        {
                printf("1.fcfs\n2.sstf\n3.Exit");
                printf("\nEnter the choice:-");
                scanf("%d",&choice);

                switch(choice)
                {
                        case 1:
                                fcfs(arr, head, size);
                                break;
                        case 2:
                                sstf(arr, head, size);
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

void fcfs(int arr[], int head, int size)
{
	int curr, distance, i, seek;

	for(i =0; i<size; i++)
	{
		curr = arr[i];
		distance = abs(curr - head);
		seek += distance;
		head = curr;
	}

	printf("\n Total no of seek operations:- %d\n",seek);
	printf("Seek Sequnce\n");

	for(i=0; i< size; i++)
	{
		printf("%d ",arr[i]);
	}
}
void sort(int arr[], int size)
{
	int i, j;
	for(i=0; i<size; i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void sstf(int arr[], int head, int size)
{
    sort(arr,size);
    int less=0, more=0, i,j=0, total;
    for(i=0; i<size; i++)
    {
	    if(arr[i] < head)
	    {
		    less++;
	    }else{
		    more++;
	    }
    }


    int larr[less], marr[more];

    for(i=less-1; i>=0; i--)
    {
	    larr[j] = arr[i];
	    j++;
    }
    j=0;
    for(i=less; i<size;i++)
    {
	    marr[j] = arr[i];
	    j++;
    }

    i=0;
    j=0;

    printf("\n Seek Sequence\n");

    while(i< less && j<more)
    {
	    int x = abs(larr[i] - head);
	    int y = abs(marr[j] - head);

	    if(  x < y){
		    head  = larr[i];
		    total += x;
		    printf("%d ",larr[i]);
		    i++;
	    }else{
		    head = marr[i];
		    total += y;
		    printf("%d ", marr[j]);
		    j++;
	    }
    }

    while(j< more)
    {
        int x= abs(marr[j] - head);
	total += x;
	printf("%d ", marr[j]);
	head = marr[j];
	j++;
    }

    printf("\n Total no of seek operations %d ", total);


}

void scan(int arr[], int head, int size)
{

}
