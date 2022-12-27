#include<stdio.h>
#include<sys/types.h>
int main()
{
	int ppid,pid;
	ppid = getppid();
	printf("Parent process Id= %d\n",ppid );

	pid = getpid();
	printf("child process id = %d\n",pid);
}
