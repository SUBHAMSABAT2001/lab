#include<stdio.h>
int main(){
	int pid=fork();
	if(pid==0){
		printf("Child starts\n");
		int n=1;
		while(n<11) printf("%d ",n++);
		printf("\nChild ends\n");
	}
	else if(pid>0){
		wait();
		printf("Parent ends\n");
	}
}
