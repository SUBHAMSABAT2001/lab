#include<stdio.h>
int main(){
	int pid=fork();
	if(pid==0){
		sleep(1);
		printf("\nChild starts\n");
		int n=1;
		while(n<11) printf("%d ",n++);
		printf("\nChild ends\n");
	}
	else if(pid>0){
		printf("Parent starts\n");
		int n=1;
		while(n<11) printf("%d ",n++);
		printf("\nParent ends\n");
		sleep(2);
	}

}
