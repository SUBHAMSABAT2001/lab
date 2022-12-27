#include<stdio.h>
#include<sys/types.h>
int main()
{
	int pid , i;
	pid = fork();
	if(pid == 0)
	{
		wait();
		printf("\n Child Starts\n");
		for(i=1; i<=10; i++){
			printf("%d",i);
		}
		printf("\n Child Ends\n");
	}else if(pid > 0){
		printf("\n Parent Starts\n ");
		for(i=1;i<=10;i++){
			printf("%d",i);
		}
		printf("\n Parents Ends\n");
	}else{
		printf("Some error ocurred");
		return -1;
	}
	return 0;
}
