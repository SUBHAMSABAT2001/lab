#include <stdio.h>
int main( )
{
	int pid,n,i,flag=0;
	printf("Enter a number: ");
	scanf("%d",&n);
 	pid = fork( ) ;
 	if ( pid < 0 )
 	{
 		printf ("Error");
	        return;
 	}
	else if (pid==0)
	{
		if (n == 0 || n == 1)
      			flag = 1;
		for (i = 2; i <= n / 2; i++) {
    			if (n % i == 0) {
      				flag = 1;
      				break;
    			}
  		}
  		if (flag == 0)
    			printf("%d is a prime number.", n);
  	else
    		printf("%d is not a prime number.", n);

	}
 	else 
 	{
		if ( n%2==0)
			printf("Even");
		else
			printf("Odd");
 	}
	return 0;
}
