#include<stdio.h>
int part[5]={100,500,200,300,400};
int part1[5]={100,500,200,300,400};
int p[4]={212,417,112,426};
void ff(){
        int a[4];
        int l,pc,i,j;
        for(i=0;i<4;i++)
        {
                pc=-1;
                l=0;
                for(j=0;j<5;j++)
                {
                        if(p[i]<=part[j])
                        {
	                       pc=j;
			       break;
                        }
                }
                if(pc!=-1)
                {
	                a[i]=pc;
                        part[pc]-=p[i];
                }
                else
		        a[i]=-1;
	}
        printf("\nFirst Fit\n");
        for(i=0;i<4;i++)
        {
                if(a[i]!=-1)
                              printf("P%d size %dK fits in Partition %d size %d\n",i,p[i],a[i],part1[a[i]]);
                else
                        printf("No contiguous memory available for P%d size %d\n",i,p[i]);
        }
        printf("\nInternal Fragmentation\n");
        for(i=0;i<5;i++)
        {
                printf("Original Partition %d : %d, Remaining : %d\n",i,part1[i],part[i]);
	}
}
void bf(){
	int a[4];
	int s,pc,i,j;
	for(i=0;i<4;i++)
	{
		pc=-1;
		s=999;
		for(j=0;j<5;j++)
		{
			if(p[i]<=part[j] && part[j]<s)
			{
				s=part[j];
				pc=j;
			}
		}
		if(pc!=-1)
		{
			a[i]=pc;
			part[pc]-=p[i];
		}
		else
			a[i]=-1;
	}
	printf("\nBest Fit\n");
	for(i=0;i<4;i++)
	{
		if(a[i]!=-1)
				printf("P%d size %dK fits in Partition %d size %d\n",i,p[i],a[i],part1[a[i]]);
		else
			printf("No contiguous memory available for P%d size %d\n",i,p[i]);
	}
	printf("\nInternal Fragmentation\n");
	for(i=0;i<5;i++)
	{
	        printf("Original Partition %d : %d, Remaining : %d\n",i,part1[i],part[i]);
	}
}
void wf(){
	int a[4];
        int l,pc,i,j;
        for(i=0;i<4;i++)
        {
                pc=-1;
                l=0;
                for(j=0;j<5;j++)
                {
                        if(p[i]<=part[j] && part[j]>l)
                        {
                                l=part[j];
                                pc=j;
                        }
                }
                if(pc!=-1)
                {
                        a[i]=pc;
                        part[pc]-=p[i];
                }
                else
                        a[i]=-1;
        }
        printf("\nWorst Fit\n");
        for(i=0;i<4;i++)
        {
                if(a[i]!=-1)
                              printf("P%d size %dK fits in Partition %d size %d\n",i,p[i],a[i],part1[a[i]]);
                else
                        printf("No contiguous memory available for P%d size %d\n",i,p[i]);
        }
        printf("\nInternal Fragmentation\n");
        for(i=0;i<5;i++)
        {
                printf("Original Partition %d : %d, Remaining : %d\n",i,part1[i],part[i]);
        }
}
int main()
{
	int ch,a;
	while(1)
	{
		printf("DYNAMIC STORAGE ALLOCATION PROBLEM\n");
		printf("1.FIRST-FIT\n2.BEST-FIT\n3.WORST-FIT\n");
		printf("\nEnter your option:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				ff();
		       		break;
			case 2:
				bf();
				break;
			case 3:
				wf();
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

