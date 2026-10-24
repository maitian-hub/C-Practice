#include<stdio.h>
int main(){
	printf("将成绩划分为A,B,C,D,E五个等级\n分别对应区间为0-20 20-40 40-60 60-80 80-90\n请输入你的分数:");
	int grade;
	scanf("%d",&grade);
	if(grade>=0&&grade<=100){
	grade/=10;
	switch(grade){
	case 0:case 1:printf("最终评判为:E");break;
	case 2:case 3:printf("最终评判为:D");break;
	case 4:case 5:printf("最终评判为:C");break;
	case 6:case 7:printf("最终评判为:B");break;
	case 8:case 9:printf("最终评判为:A");break;
	case 10:printf("最终评判为:A+");break;
	default:printf("此成绩无效");break;
	}}  else{printf("此成绩无效");}
	return 0;
}
