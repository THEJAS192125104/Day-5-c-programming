#include<stdio.h>
int main(){
	float prin_amount;
	float intrest;
	char n;
	float rate1=0.12;
	float rate2=0.10;
	int years;
	printf("is customer is a senoir citizen(y/n): ");
	scanf("%c",&n);
	n=1;
	printf("entr years: ");
	scanf("%d",&years);
	printf("entr amount: ");
	scanf("%f",&prin_amount);
	if(prin_amount<=0,years<0){
		printf("enter valid information");
	}else if(1){
		printf("total intrst= %f",(prin_amount*rate2*years/100)*100);
	}else{
		printf("total intrest= %f",(prin_amount*rate2*years/100)*100);
	}
	return 0;
	
}
