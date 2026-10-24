#include<stdio.h>
int main(){
	int price=0;
	int bill=0;
	printf("请输入您的金额和票面");
	scanf("%d %d",&price,&bill); 
	if(bill-price>0){
	printf("应该找您:%d",bill-price);	
	}else{
		printf("您的钱不够"); 
	}
	return 0;
	
	
	
	
	
	
	
	
	
	
	
}
