#include<stdio.h>
#include<sys/types.h>
int main(){
	int pid;
	pid = fork();
	if(pid < 0){
		printf("Error ocurred");
		return -1;
	}
	else if(pid == 0){
		printf("\nChild is created");
		printf("\n Child Process Id:- %d", getpid());

	}else{
		printf("\nParent Process Id:- %d", getppid());
	}

	return 0;
		
}
