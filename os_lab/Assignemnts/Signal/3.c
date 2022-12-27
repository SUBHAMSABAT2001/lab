#include<stdlib.h>
#include<stdio.h>
#include<signal.h>

void sigChldSig(int signo){
	printf("Signal SIGCHLD: %d \n",signo);
	exit(0);
}


int main(){
	int i=0;
	int pid=fork();
	signal (SIGCHLD , sigChldSig);
	if(pid==0){
		while(1){
			if(i++==20) {
				raise(SIGCHLD);
			}
		}
	}
	return 0;
}
