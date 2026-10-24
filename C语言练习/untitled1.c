#include<stdio.h>
int main(){
	int n;
	printf("输入一个三位的正整数:");
	scanf("%d",&n);
	int a=n%100%10;
	int b=n%100/10;
	int c=n/100;		
	printf("%d%d%d",a,b,c);
	
	return 0;
}
