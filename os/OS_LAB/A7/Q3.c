#include <stdio.h>
#include<signal.h>
void sig_handler(int signum){
	printf("\n%d,ChILD TERMINATE SIGNAL\n",signum);
}
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
		sleep(1);		
		printf("Child starts\n");
                for (i=1;i<=10;i++){
        		printf("%d \t",i);
                }
   		printf("\nChild ends");
		signal(SIGCHLD,sig_handler);
	}
 	else 
 	{
		wait();		
		printf("\nParent starts");
		for (i=1;i<=10;i++){
        		printf("%d \t",i);
                }
		printf("\nParent ends");
		sleep(1);
		
 	}
	return 0;
}
