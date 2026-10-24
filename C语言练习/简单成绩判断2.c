#include<stdio.h>
int main(){
	int a;
	printf("满分一百,请输入你的成绩:");
	scanf("%d",&a);	
	if(a>=90&&a<=100){printf("优秀\n");}
	else if(a>=80&&a<90){printf("良好\n");}
	else if(a>=60&&a<80){printf("及格\n");}
	else if(a==0){printf("零分,重新答题!\n");}
	else if(a>100){printf("你想上天呐?我都说了满分一百\n");}
	else if(a<0){printf("可以可以,你还能考出负数来,我还是太小看你了\n");}
	else{printf("不及格\n");}
	return 0;

	}	
