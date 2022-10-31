#include<stdio.h>
int checkprime(int);
int main(){
	int n;
	int result;
	printf("enter a number: ");
	scanf("%d",&n);
	result= checkprime(n);
	if(result==1){
		printf("prime");
	}else{
		printf("not a prime");
	}
	return 0;
}
int checkprime(int x){
	int y;
	char p;
	float z=7.2;
	if(x<=0||x==1){
		return 0;
	}
	for(y=2;y<=x/2;y++){
		if(x%y==0){
			return 0;
		}
		return 1;
	}
}
