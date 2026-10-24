#include<stdio.h>
int main(){
	printf("输入两个时间节点，从而得到此节点的时间差:");
	int hour1,minute1,hour2,minute2;
	scanf("%d %d %d %d",&hour1,&minute1,&hour2,&minute2);
	 int a=hour2-hour1;
	 int b=minute2-minute1;
	if(b<0){	
		b=60+b;	
		a--; }
	printf("时间差为:%d小时%d分钟", a,b);	
	return 0; 
}
 
