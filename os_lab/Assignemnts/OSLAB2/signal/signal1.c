
#include<stdio.h>
#include<signal.h>

void handle_sigint(int sig)
{
	printf("Caught signal %d\n", sig);
        exit(0);
}

int main()
{
	signal(SIGINT, handle_sigint);
	while (1)
        printf("hello\n");
	return 0;
}

