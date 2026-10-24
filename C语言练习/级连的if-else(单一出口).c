#include<stdio.h>
int main(){
	int x,y;
	scanf("%d",&x);
	if(x>0){y=2*x;}
	else if(x==0){y=0;}
	else if(x<0){y=-1;}
	printf("%d",y);
	return 0;
}
/*对比:
#include<stdio.h>
int main(){
	int x,y;
	scanf("%d",&x);
	if(x>0){printf("%d",-1);}
	else if(x==0){printf("%d",0);}
	else if(x<0){printf("%d",2*x);}
	retuen 0;
}
*/

