#include <stdio.h>
int main( )
{
	int pid,n,i;
 	pid = fork() ;
 	if ( pid < 0 )
 	{
 		printf ("Error");
	        return;
 	}
	else if (pid==0)
	{		
		sleep(1);
		printf("Child starts\n");        
		sleep(5);
		for (i=1;i<=10;i++){
        		printf("%d \t",i);
                }
   		printf("\nChild ends");
	}
 	else 
 	{
		printf("\nParent starts");
		sleep(2);		
		for (i=1;i<=10;i++){
        		printf("%d \t",i);
                }
		
		printf("\nParent ends");
		
 	}
	return 0;
}
