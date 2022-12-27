#include<stdio.h>
#include<signal.h>
void sig_handler(int signum){
	printf("\n%d,INTERRUPT SIGNAL\n",signum);
}
void sig_handler1(int signum){
	printf("\n%d,QUIT SIGNAL\n",signum);
}
void main(){
	int i;
	signal(SIGINT,sig_handler);
	signal(SIGQUIT,sig_handler1);
	for(i=1;i<=10;i++){
		printf("%d : In main function\n",i);
		sleep(1);
	}
}
