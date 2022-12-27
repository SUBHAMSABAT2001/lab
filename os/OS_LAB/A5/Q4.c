#include <stdio.h>
int main( )
{
	int pid,n,i;
 	pid = fork( ) ;
 	if ( pid < 0 )
 	{
 		printf ("Error");
	        return;
 	}
	else if (pid==0)
	{
		printf("Child starts\n");
                for (i=1;i<=10;i++){
        		printf("%d \t",i);
                }
   		printf("\nChild ends");
	}
 	else 
 	{
		wait();
		printf("\nParent ends");
 	}
	return 0;
}
