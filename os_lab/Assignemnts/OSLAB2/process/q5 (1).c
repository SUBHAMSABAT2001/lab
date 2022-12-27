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
		printf("Parent Starts\n");
		for(i = 1; i<=10; i++){
			printf("%d ", i);
		}
		printf("\nParent Ends\n");
	}
		
}

