#include<stdio.h>
#include<sys/types.h>
int main()
{
	int pid , i;
	pid = fork();
	if(pid > 0){
		printf("\n Parent Starts\n");
		sleep(2);
		for(i=1; i<=10;i++){
			printf("%d",i);
		}
		printf("\nParent Ends\n");
		sleep(2);
	}else if(pid == 0){
		wait();
		printf("\n Child Starts\n");
		sleep(3);
		for(i=1; i<=10;i++){
			printf("%d", i);
		}
		printf("\n Child Ends\n");
	}else{
		printf("\n Some Error ocurred\n ");
		return -1;
	}
	return 0;
}
