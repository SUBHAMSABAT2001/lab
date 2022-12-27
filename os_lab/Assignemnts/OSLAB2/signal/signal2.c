#include<stdio.h>
#include<signal.h>

void handle_sigint(int sig)
{
	printf("Caught signal number %d\n", sig);
        exit(0);
}
void handle_sigquit(int sig1)
{
	printf("Caught signal number %d\n", sig1);
        exit(0);
}

int main()
{
	signal(SIGINT, handle_sigint);
        signal(SIGQUIT, handle_sigquit);
	while (1)
        printf("hello\n");
	return 0;
}

