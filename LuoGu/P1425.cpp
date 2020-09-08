#include<stdio.h>
int main(){
	int a,b,c,d;
	int endh,endm;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(d>b){
		printf("%d %d",c-a,d-b);
		return 0;
	}
	else{
		endh=c-a-1;
		endm=d+60-b;
		printf("%d %d",endh,endm);
		return 0;
	}
}
