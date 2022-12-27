#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>
void main()
{
	int pid;
	int no;
	printf("enter number : ");
	scanf("%d",&no);
	pid = fork();

	if(pid<0)
	{
		printf("error ");
		exit(0);
	}
	if(pid==0)
	{
		int flag=0,i;
		for(i=2;i<no;i++)
		{
			if(no%i==0)
				flag=1;
		}

		if(flag==0)
			printf("%d is a prime number\n", no);
		else
			printf("%d is not a prime number\n",no);
	}
	else
	{
		if(no%2==0)
			printf("%d id even\n",no);
		else
			printf("%d is odd\n", no);
	}
}

