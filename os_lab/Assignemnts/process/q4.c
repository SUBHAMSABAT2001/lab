#include<stdio.h>
int main() {
	int pid;
	pid = fork();
	if(pid == 0) {
		printf("Child start\n");
		int n = 1;
		int i = 1;
		while(i<11){
			printf("%d\t", n++);
			i++;
		}
		printf("\n");
		printf("Child end\n");
	}
	else if(pid>0) {
		wait();
		printf("Parents end\n");
	}
	return 0;
}
