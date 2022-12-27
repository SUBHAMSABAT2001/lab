#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>

int main(int argc , char **argv)
{
	void catch(int);
	void child(void);
	void parent(int pid);
	int pid;

	signal(SIGCHLD, catch);

	switch (pid = fork())
	{
		case 0:
			child();
			break;
		default:
			parent(pid);
			break;
		case -1:
			perror("fork");
			exit(1);
	}
	exit(0);
}

void child(void)
{
	printf("child: i am the child\n");
	sleep(3);
	printf("child: i am exiting\n");
	exit(123);
}

void parent(int pid)
{
	printf("parent: i am the parent\n");
	sleep(10);
	printf("parent: i am exiting\n");
}

void catch(int snum)
{
	int pid;
	int status;

	pid = wait(&status);
	printf("parent: child process exited with value %d\n", WEXITSTATUS(status));
	printf("the signal number %d\n", snum);
}
