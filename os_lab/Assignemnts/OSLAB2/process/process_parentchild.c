#include<stdio.h>
#include<sys/types.h>
int main(){
	int pid, i;
	pid = fork();
	if(pid == 0){
		printf("Child Starts\n");
		for(i = 1; i<=10; i++){
			printf("%d ", i);
		}
		printf("\nChild Ends\n");
	}
	else{
		wait(10);
		printf("Parent Ends\n");
	}
		
}

