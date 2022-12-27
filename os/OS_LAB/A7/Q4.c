#include<stdio.h>
#include<signal.h>
#include<unistd.h>
int flag=0;
void handle_alarm(int sig){
	flag=1;
	printf("\nALARM\n");
}
int main(){
	int i;
	signal(SIGALRM,handle_alarm);
	alarm(1);
	for(i=0;i<10;i++){
    		sleep(3);
		if (flag=1){
			printf("hello\n");
			flag=0;
			alarm(1);
		}
	}
	return 0;
}
