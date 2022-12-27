#include<stdio.h>
int part[5]={100,500,200,300,600};
int p[4]={212,417,112,426};

int main()
{
	int ch,n=1,a;
	while(n)
	{
		printf("DYNAMIC STORAGE A\n");
		printf("1.FCFS\n2.SJF\n3.PS\n4.RR\n5.SRTF\n");
		printf("\nEnter option:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				fcfs();
		       		break;
			case 2:
				sjf();
				break;
			case 3:
				ps();
				break;
			case 4:
				rr();
				break;
			case 5:
				srtf();
				break;
			default:
		       		printf("\nInvalid input\n");
		}
		printf("\nDo you want to continue (y=1/n=0):\n");
		scanf("%d",&a);
		if(a==1)
			continue;
		else
			break;
	}
}

