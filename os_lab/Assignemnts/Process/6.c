#include<stdio.h>
int main(){
	int pid=fork();
	if(pid==0){
		printf("Child starts\n");
		sleep(1);
		int n=1;
		while(n<12) printf("%d ",n++);
		printf("\nChild ends\n");
	}
	else if(pid>0){
		printf("Parent starts\n");
		sleep(1);
		int n=1;
		while(n<11) printf("%d ",n++);
		printf("\nParent ends\n");
		sleep(2);
	}
}
