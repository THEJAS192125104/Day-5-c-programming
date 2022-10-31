#include<stdio.h>
int main(){
	int n,i,facto=1;
	printf("enter the number: ");
	scanf("%d",&n);
	if(n){
		for(i=1;i<=n;i++){
			facto *= i;
			}
			printf("%d",facto);
	}else{
		printf("invalid");
	}
	return 0;
