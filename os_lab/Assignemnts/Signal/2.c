#include<stdlib.h>
#include<stdio.h>
#include<signal.h>

void sigIntSig(int signo){
	printf("Signal SIGINT: %d \n",signo);
	
}
void sigQuitSig(int signo){
	printf("Signal SIGQUIT: %d \n",signo);
	exit(0);
}

int main(){
	int i=0;
	signal (SIGINT , sigIntSig);
	signal (SIGQUIT , sigQuitSig);
	while(1){
		if(i++==20) {
			raise(SIGINT);
			raise(SIGQUIT);
		}
	}
	return 0;
}
