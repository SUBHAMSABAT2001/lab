#include<stdio.h>
#include<stdlib.h>
void fcfs(){
	int rs[8]={98,183,37,122,14,124,65,67};
	int ini=53;
	int i,s=0;
	printf("SEEK SEQUENCE\n");
	for(i=0;i<8;i++)
		printf("%d\t",rs[i]);
	printf("\nTOTAL NUMBER OF SEEK SEQUENCE =");
	//s=abs(ini-rs[0]);
	for(i=0;i<8;i++){
		s+=abs(rs[i]-ini);
		ini=rs[i];
	}
	printf("%d",s);
	printf("\n");	
}
void sstf(){
	int rs[8]={98,183,37,122,14,124,65,67};
	int ini=53,i,j,s=0;
	int t[8],b[8],c[8];
	for(i=0;i<8;i++){
		t[i]=abs(rs[i]-ini);
		c[i]=t[i];
	}
	for(i=0;i<8;i++){
		for(j=0;j<(8-i-1);j++){
			int a=0;
			if(t[j]>t[j+1]){
				a=t[j];
				t[j]=t[j+1];
				t[j+1]=a;
	    		}
		}
	}
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			if(t[i]==c[j]){
				b[i]=rs[j];
			}
		}
	}
	for(i=0;i<8;i++){
		s=s+abs(ini-b[i]);
		ini=b[i];
	}
	printf("\nSEEK SEQUENCE :\n");
	for(i=0;i<8;i++)
		printf("%d\t",b[i]);
	printf("\nTOTAL NUMBER OF SEEK OPERATIONS = %d\n",s);
}
void scan(){
	printf("Scan");
}
/*void scan(){
	int rs[8]={98,183,37,122,14,124,65,67};
	int ini=53;
	printf("\nSEEK SEQUENCE :\n");
	for(i=0;i<8;i++)
		printf("%d\t",b[i]);
	printf("\nTOTAL NUMBER OF SEEK OPERATIONS = %d\n",s);
}*/
int main()
{
	int ch,a;
	while(1)
	{
		printf("DISK SCHEDULING ALGORITHMS\n");
		printf("1.FCFS\n2.SSTF\n3.SCAN\n4.EXIT\n");
		printf("\nEnter your option:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				fcfs();
		       		break;
			case 2:
				sstf();
				break;
			case 3:
				scan();
				break;
			case 4:
				exit(0);
			default:
		       		printf("\nInvalid input\n");
		}
	}
}

