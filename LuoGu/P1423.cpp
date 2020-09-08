#include<stdio.h>
int main(){
	double x;
	scanf("%lf",&x);
	double step=2.0;
	int num=0;
	while(x>0){
		x=x-step;
		num++;
		step=0.98*step;
	}
	printf("%d",num);
}
