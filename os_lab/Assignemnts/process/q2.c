#include<stdio.h>
#include<sys/types.h>
int main() {
	int n,pid,i,flag = 1;
	printf("Enter a number to check even of odd and prime or not:");
	scanf("%d", &n);
	pid = fork();
	if(pid == 0) {
		if(n==2) {
			flag = 1;
		}
	
		else {
			for(i=2; i*i<n; i++) {
				if(n%i == 0) {
					flag = 0;
					break;	
				}
			}
		}
		if(flag == 1) {
			printf("Number is a prime number\n");
		}
		else {
			printf("Number is not a prime number \n");
		}
	
	}
	else {
		if(n%2==0) {
			printf("Number is even\n");
		}
		else {
			printf("Number is odd\n");
		}
	}
	return 0;
}
	
	
