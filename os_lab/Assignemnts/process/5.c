#include <stdio.h>
#include<sys/types.h>
int main( )
{
	int pid,i;
	pid = fork( ) ;

	if ( pid == 0 )
	{
		sleep(1);
		printf ( "Child starts\n" );
		for(i=1;i<11;i++)
			printf("%d ",i);
	
		printf ( "\nChild ends\n" );
	}
	else
	{
		printf("Parent starts\n");
		for(i=1;i<11;i++)
			printf("%d ",i);

		printf ( "\nParent ends\n" );
	}
}
