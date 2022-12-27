#include<stdio.h>
#include<sys/types.h>
int main()
{
	int pid,cid;
	int x=fork();
	pid=getppid();
	if(x==0)
	{
		pid=getppid();
		cid=getpid();
		printf("Parent id=%d\nChild id=%d\n",pid,cid);
	}
	else
	{
		printf("Child not created\n");
		printf("Process id=%d\n",pid);
	}
	return 0;
}
