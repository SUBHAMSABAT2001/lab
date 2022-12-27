#include<stdio.h>
#include<signal.h>
#include<stdbool.h>
#include<unistd.h>

int flag = 0;

void handle_alarm(int sig)
{
	flag = 1;
	printf("\nAlarm");
}

int main()
{
	signal(SIGALRM, handle_alarm);
	alarm(1);
	for(;;){
		sleep(5);
		if(flag )
		{
			printf("\n Hello");
		}
		flag = 0;
		alarm(1);
	}
}
