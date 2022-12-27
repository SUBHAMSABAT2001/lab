#include<stdio.h>
#include<sys/types.h>
int main()
{
	int x=fork();
	if(x>0)
	{
		printf("Parent starts\n");
		int i=1;
		for(i=1;i<=10;i++)
			printf("%d ",i);
		printf("\nParent ends\n");

	}
	else if(x==0)
	{	
		sleep(1);
		printf("Child starts\n");
		int i=1;
		for(i=1;i<=10;i++)
			printf("%d ",i);
		printf("\nChild ends\n");
	}
	return 0;
}
