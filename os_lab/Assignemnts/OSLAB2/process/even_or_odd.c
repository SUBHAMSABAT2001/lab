#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
        int i;
        int num;
        scanf("%d" , &num);
        if(fork() == 0)
        {
                
                for(i=2;i<num/2;i++)
                 
               {
                    if(num%i==0)
                      {
                       printf("composite number - by child process");
                       break;
                      }
               }
		if(i> num/2)
		printf("prime - by child process");
  
                       
        }
        else
        {
                if(num%2==0)
                 printf("even number - by parent process"); 
               else
               printf("odd number - by parent process");
        }
}

