#include<stdio.h>
int main(){
	int pid=getpid();
	int ppid=getppid();
	printf("PID=%d\nParent PID=%d\n",pid,ppid);
	return 0;
}
