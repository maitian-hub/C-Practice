#include<stdio.h>
int main(){
	const int standard=40;
	const double rate=8.25;
	printf("一周工作时长标准为40小时，此后每小时将收取原工时1.5倍工资\n");  
	printf("请输入您的工作时间以获取对应工资:");
	int hours;
	scanf("%d",&hours);
	double pay=hours*rate;
	if(hours>standard)
	printf("你的工资为%.3lf",standard*rate+(hours-standard)*rate*1.5);
	else
	printf("你的工资为:%.3lf\n",pay);
	
	return 0;
}
