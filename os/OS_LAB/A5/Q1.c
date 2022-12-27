#include <stdio.h>
#include<sys/types.h>
int main( )
{
	int pid;
	pid = fork( ) ; 
 	if ( pid == 0 ) 
 	{
 		pid=getpid();
		printf("Child process id : %d",pid);
	}
	else 
	{
		wait();
		pid=getppid();
		printf("Parent process id : %d",pid);
	}
	return 0;
}
