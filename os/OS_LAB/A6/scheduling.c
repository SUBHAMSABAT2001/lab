#include<stdio.h>
#define size 30
int queue[size];
int r=-1,f=-1;
void qpush(int e){
	if(f==-1){
		f=0;
	}
	r=r+1;
	queue[r]=e;
}
int qpop(){
	int e,s=0;
	if((f>r)||(f==-1)){
		printf("Empty process");
		return -1;
	}
	else{
		e=queue[f++];
		return e;
	}
}
void fcfs(){
	int i,p[10],s=0,o[20];
	qpush(24);
	qpush(3);
	qpush(3);
	printf("\nPriority order\n");
	for(i=0;i<3;i++){
		o[i]=qpop();
		printf("%d\t",o[i]);
		s=s+o[i];
		p[i]=s;
	}
	printf("\nExecution time:\n");
	for(i=0;i<3;i++)
		printf("p%d=%d\t",i,o[i]);
	s=0;
	for(i=0;i<3;i++)
		s=s+(p[i]-o[i]);
	printf("\nAWT is %d",(s/3));
}
void sjf(){
	int e[50],pr[]={1,2,3};
        float avg;
     	e[0]=24;
        e[1]=3;
        e[2]=3;
        int temp,i,j;
        for(i=0;i<3;i++){
          	for(j=i;j<3;j++){
             		if(e[i]>e[j]){
		     		temp=e[i];
		     		e[i]=e[j];
		     		e[j]=temp;
		      
		     		temp=pr[j];
		     		pr[j]=pr[i];
		     		pr[i]=temp;
	     		}
	 	}

      	}	
  	qpush(e[0]);
  	qpush(e[1]);
  	qpush(e[2]);
  	int s=0,p[10],ps[10];
 	for(i=0;i<3;i++){
		ps[i]= qpop();
		printf("%d\t",ps[i]);
                s=s+ps[i];
		p[i]=s;
	 }
	 printf("\nEXECUTION TIME\n");
	 for(i=0;i<3;i++){
          	printf("p%d=%d",pr[i],p[i]);
	 }
	 s=0;
	 for(i=0;i<3;i++){
            	s=s+(p[i]-ps[i]);
	 }
	 avg=(float)(s/3);
	 printf("\nAverage time is %f",avg);
}
void ps(){
	int e[50],pr[50],p[10],i,j;
	pr[0]=2;
	pr[1]=1;
	pr[2]=3;
	e[0]=24;
	e[1]=3;
	e[2]=3;
	int t=1;
	float avg;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(pr[j]==t){
				qpush(e[j]);
				t++;
			}
		}
	}
	int s=0,ps[20];
	for(i=0;i<3;i++){
		ps[i]= qpop();
		printf("%d\t",ps[i]);
                s=s+ps[i];
		p[i]=s;
	 }
	 printf("\nEXECUTION TIME\n");
	 for(i=0;i<3;i++){
          	printf("p%d=%d",pr[i],p[pr[i]]);
	 }
	 s=0;
	 for(i=0;i<3;i++){
            	s=s+(p[i]-ps[i]);
	 }
	 avg=(float)(s/3);
	 printf("\nAverage time is %f",avg);
}
void rr(){	
}
void srtf(){
}
int main()
{
	int ch,n=1,a;
	while(n)
	{
		printf("Enter a scheduling algorithm:\n");
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

