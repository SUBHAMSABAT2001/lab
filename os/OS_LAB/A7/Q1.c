#include<stdio.h>
#include<signal.h>
void sig_handler(int signum){
	printf("\nINTERRUPT SIGNAL\n");
}
void main(){
	int i;
	signal(SIGINT,sig_handler);
	for(i=1;i<=4;i++){
		printf("%d : Hello\n",i);
		sleep(1);
	}
}
