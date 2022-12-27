#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void sig_handler(int signum)
{
	printf("inside handler function\n");
}

int main()
{
	signal(SIGALRM, sig_handler);
	alarm(2);
	int i=1;

	while(i<10)
	{
		printf("%d : Inside main function\n" ,i);
		sleep(1);
		i++;
	}
	return 0;
}
