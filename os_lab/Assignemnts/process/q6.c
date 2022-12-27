#include<stdio.h>
int main() {
	int pid;
	pid = fork();
	if(pid == 0) {
		printf("Child start\n");
		sleep(1);

		int n = 1;
		int i = 1;
		while(i<11){
			printf("%d ", n++);
			i++;
		}
		printf("\n");
		printf("Child end\n");
	}
	else if(pid>0) {
		
		printf("Parents end\n");
		sleep(1);
		int n = 1;
		int i = 1;
		while(i<11) {
			printf("%d ", n++);
			i++;
		}
		printf("\n");
		printf("Parents end\n");
		sleep(2);
	}
	return 0;
}
