#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
void abc ();
int main()
{
	signal(SIGINT, abc);
	while(1)
	{
		sleep(1);
		printf("\n hello");
	}

}

void abc(int i)
{
	printf("Signal cought ... SIGINT");
}
