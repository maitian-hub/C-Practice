#include<stdio.h>
int main(){
	printf("请输入三条边长来判断是否能组成三角形:");
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a){
	printf("YES\n");
	if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
	printf("直角三角形\n");}
	else if(a==b&&b==c){
	printf("等边三角形\n");	}
	else if((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&b!=a)){
	printf("等腰三角形\n");}		
	}
	else{
		printf("NO\n");
	}
	
	
	
	
	
	
	return 0;
}
