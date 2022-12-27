#include<stdio.h>
#include<sys/types.h>
int main()
{
	int n;
	printf("Enter num:");
	scanf("%d",&n);
	if(n%2==0)
		printf("even no\n");
	else
		printf("odd no\n");
	int x=fork();
	if(x==0)
	{
		int i=2;
		for(i=2;i<n;i++)
		{
			if(n%i==0)
				break;
		}
		if(i==n)
			printf("%d is prime\n",n);
		else
			printf("%d is composite no\n",n);
	}
	return 0;
 
}
