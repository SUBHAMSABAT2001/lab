#include<stdio.h>
#include<sys/types.h>
int main()
{
	int pid, num;
	printf("\n ENter a number:-");
	scanf("%d",&num);
	pid = fork();

	if(pid == 0)
	{
		if(num %2 == 0){
			printf("\n %d is even",num);
		}else{
			printf("\n %d is odd",num);
		}
	}else if(pid > 0){
		int i, m=0, flag=0;
		m = num/2;
		for(i = 2;i<=m;i++){
			if(num %i == 0){
				flag = 1;
			}else{
				flag = 0;
			}
		}

		if(flag == 1){
			printf("\n%d is composite no",num);
		}else{
			printf("\n%d is prime no",num);
		}
	}else{
		printf("\n Some error ocurred");
		return -1;
	}
	return 0;
}
