#include<stdio.h>
#include<sys/types.h>
int main()
{
	int x=fork();
	if(x==0)
	{
		printf("Child starts\n");
		int i=1;
		for(i=1;i<=10;i++)
			printf("%d ",i);
		printf("\nchild ends\n");

	}
	else if(x>0)
	{	wait();
		printf("Parent ends\n");
	}
	return 0;
}
