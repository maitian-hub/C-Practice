#include<stdio.h>
int main (){
	printf("满分一百，请输入成绩:"); 
	int a=0;
	scanf("%d",&a);
	if(a<60) 
	printf("很遗憾，您的成绩不合格\n");
	else{
	printf("恭喜你，成绩合格了\n"); 	
	printf("再见!");	}
	return 0;
} 
