#include<stdlib.h>
#include<stdio.h>
#include<signal.h>

void sigIntSig(){
	printf("Signal caught !! SIGINT \n");
	exit(0);
}

int main(){
	int i=0;
	signal (SIGINT , sigIntSig);
	while(1){
		if(i++==20) raise(SIGINT);
	}
	return 0;
}
