#include <stdio.h>
#include<sys/types.h>
int main( )
{
	int pid,i;
	pid = fork( ) ;

	if ( pid == 0 )
	{
		printf ( "Child starts\n" );
		sleep(1);
		printf("child : ");
		for(i=1;i<11;i++)
			printf("%d ",i);
	
		printf ( "\nChild ends\n" );
	}
	else
	{
		printf("Parent starts\n");
		sleep(1);
		printf("parent : ");
		for(i=1;i<11;i++)
			printf("%d ",i);

		printf ( "\nParent ends\n" );
	}
}
