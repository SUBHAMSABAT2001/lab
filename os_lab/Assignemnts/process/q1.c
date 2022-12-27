#include <stdio.h>
#include<sys/types.h>
int main( )
{
	int pid,ppid;
	pid = getpid();
	ppid = getppid();
	printf("Process Id = %d\n", pid);
	printf("Parent Process Id = %d\n\n", ppid);
	return 0;
}
