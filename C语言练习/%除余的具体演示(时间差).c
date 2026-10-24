#include<stdio.h>
	int main(){
		
	int hour1; int minute1;
	int hour2; int minute2;
	printf("请输入小时和分钟计算时间差");
	scanf("%d:%d",&hour1,&minute1);
	scanf("%d:%d",&hour2,&minute2);
	int t=hour2*60+minute2-hour1*60-minute1; 
	printf("时间差是%d小时%d分\n",t/60,t%60);	
		
	return 0;	
		
		
		
		
	} 
