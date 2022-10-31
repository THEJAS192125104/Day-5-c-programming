#include<stdio.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a , int b);
int div(int a , int b);
int main(){
	int x,y;
	int choice;
	printf(" enter a number: \n");
	scanf("%d",&x);
	printf("enter another number: \n");
	scanf("%d",&y);
	printf("enter the choice: ");
	scanf("%d",&choice);
	if(choice==1){
		printf("%d",mul(x,y));
	}else if(choice==2){
		printf("%d",add(x,y));
	}else if(choice==3){
		printf("%d",sub(x,y));
	}else{
		printf("%d",div(x,y));
	}
	
}
int add(int p, int q){
	return p+q;
}
int sub(int p, int q){
	return p-q;
}
int mul(int p, int q){
	return p*q;
}
int div(int p, int q){
	return p/q;
}
