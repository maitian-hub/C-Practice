#include<stdio.h>
	int main(){ 
	const int x;
	printf("请输入边长：");
	scanf("%d",&x);
	int s=x*x;
	printf("面积是：%d",s);
	printf("\n");
	printf("请输入边长：");
	scanf("%d",&x);
	s=x*x; 
	printf("面积：%d",s);
	return 0;
	//麻烦，循环while  继续y？ 
}
