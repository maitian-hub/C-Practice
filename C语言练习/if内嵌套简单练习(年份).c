#include<stdio.h>
int main(){
	const int a=2026;
	int b,c;
	printf("可以告诉我现在是几年几月吗:");
	scanf("%d%d",&b,&c);
	if(b==a){
	if(c<=12){printf("谢谢你\n");}
	if(c>=13){printf("月份是不是有点不太对\n");}
	}
	else{printf("年份是不是有点不太对\n");}
	return 0;
}
