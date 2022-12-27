#include<stdio.h>
#include<stdbool.h>
bool checkPrime(int n){
	int i=2;
	for(i=2; i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int pid,n;
	printf("Enter the number: ");
	scanf("%d",&n);
	pid=fork();
	if(pid==0){
		if(checkPrime(n)) printf("Entered number is prime\n");
		else printf("Entered Number is not prime\n");
	}
	else if(pid>0){
		if(n&1) printf("Entered number is odd\n");
		else printf("Entered number is even\n");
	}
	else printf("Error!!\n");
}
