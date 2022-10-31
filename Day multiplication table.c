#include<stdio.h>
int main(){
	int m,n,i;
	printf("enter the number: ");
	scanf("%d",&m);
	printf("enter the limit: ");
	scanf("%d",&i);
	if(i<=0){
		printf("cannot generate multiplication table with %d limit.",i);
	}else{
		for(n=1;n<=i;n++){
			printf("%d x %d= %d\n",m,n,m*n);
		}
	}
	return 0;
