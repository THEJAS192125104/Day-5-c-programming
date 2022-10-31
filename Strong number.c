#include<stdio.h>
int main(){
	int n, i,factorial ,remainder;
	
	printf("enter the number: ");
	scanf("%d",&n);
	int sum=0;
	int num=n;
	while(n){
		i=1,factorial=1;
		remainder=n%10;
		while(i<=remainder){
			factorial *= i;
			i++;
		}
		sum += factorial;
		n= n/10;
	}
	if(sum==num){
		printf(" strong number");
	}else{
		printf("not a strong number");
	}
	return 0;
	
}
