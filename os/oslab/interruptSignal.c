#include<stdio.h>
#include<signal.h>
void frr(int);
int main()
{
	int i = 1;
	signal(SIGINT, frr);
	int pid = fork();
	if(pid == 0){
		sleep(1);
		while( i != 10){
			if(i == 5){
				kill(pid , SIGINT);
				break;
			}
			printf("%d ",i);
			i++;
		}
	}
        	
	
}

void frr(int i)
{
	printf("Signal cought....");
}
