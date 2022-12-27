#include <stdio.h>
#include<sys/types.h>
int main( )
{
	int pid,i;
	pid = fork( ) ;

	if ( pid == 0 )
	{
		printf ( "Child starts\n" );
		for(i=1;i<11;i++)
			printf("%d ",i);
	
		printf ( "\nChild ends\n" );
	}
	else
	{
		wait();
		printf ( "Parent ends\n" );
	}
	return 0;
}         
