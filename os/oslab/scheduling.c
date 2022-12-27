#include<stdio.h>
#include<stdlib.h>
int time[] = {24, 3, 3};
int p[] = {2, 0, 4};
int process[] = {1, 2, 3};
int wt[3], tat[3];
int ts = 3;
void fcfs();
void waitingCalculator();
void tatCal();
void sjf();
void priority();
void rr();
void sort(int arr1[], int arr2[], int arr3[])
{
	int temp, i,j, val;
	for(i=0; i<3; i++)
	{
		val = i;
		for(j = i; j<3;j++){
			if(arr1[val] > arr1[j])
			{
				val = j;
			}
		}
		if(val != i){
			int temp = arr1[i];
			arr1[i] = arr1[i+1];
			arr1[i+1] = temp;
			temp = arr2[i];
			arr2[i] = arr2[i+1];
			arr2[i+1] = temp;
			temp = arr3[i];
			arr3[i] = arr3[i+1];
			arr3[i+1] =temp;
		}
	}

}
int main()
{
	int choice=4;

	while(choice)
	{
		printf("\n1.FCFS\n2.SJf\n3.Prioriy\n4.Round Robin\n5.exit\n");
		printf("Enter choice:-");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				fcfs();
				break;

		        case 2:
				sjf();
				break;
			case 3:
				priority();
				break;
				
			case 4:
				rr();
				break;
			case 5:
				return -1;
		}

	}
	return 0;
}
void fcfs()
{
	int total_waiting, total_tat,i;
	waitingCalculator();
        tatCal();
        for(i=0;i<3;i++)
	{
		total_waiting += wt[i];
		total_tat += tat[i];
		printf("p%d ",i+1);
	}

	printf("\nAverage Waiting time:-%d\n", total_waiting/3);
	printf("\nAverage Tat time :- %d\n", total_tat/3);
}
void waitingCalculator()
{
	int i;
	wt[0] = 0;
	for(i=1; i<3;i++){
		wt[i] = time[i-1] + wt[i-1];
	}
}
void tatCal()
{
	int i;
	for(i=0;i<3;i++)
	{
		tat[i] = time[i] + wt[i];
	}

}
void sjf()
{
	sort(time,process,p);
	waitingCalculator();
	tatCal();
	
	int i, total_wat, total_tat;
        for(i=0;i<3;i++)
	{
		printf("%d ",time[i]); 
	}
	for(i=0; i<3;i++)
	{
		total_wat += wt[i];
		total_tat += tat[i];
	}

	printf("Average Waiting time:- %d\n",total_wat/3);
        printf("Average tat time:- %d\n",total_tat/3);
       
        for(i=0; i<3;i++)
	{
		printf("%d ",process[i]);
	}	

}

void priority(){
	int i =0;
	sort(p,time,process);
	fcfs();
	for(i=0;i<3;i++){
		printf("%d ",process[i]);
	}
}
void rr(){
	int temp[10], flag = 0, i;
	/*sort(process, time , p);*/
	for(i=0;i<3;i++)
	{
		temp[i] = time[i];
	}
	while(1){
		printf("hello");
		flag = 0;
		for(i=0;i<3;i++)
		{
			if(time[i] > ts){
				int c = time[i] - ts;
				time[i] = c;
				temp[i] = c;
			}else if(time[i] < ts){
				time[i] = 0;
				temp[i] += time[i];
			}else if(time[i] == 0)
			{
				flag = 1;
			}
		}

		if(flag == 1){
			break;
		
		}

	}

	for(i = 0; i<3; i++)
	{
		printf("%d\n",temp[i]);
	}

}
