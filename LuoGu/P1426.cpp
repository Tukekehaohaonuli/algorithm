#include<cstdio>
int main(){
	double v=7;
	double s,x;
	scanf("%lf%lf",&s,&x);
	double now=7;
	while(true){
		if(now>s+x){
			printf("n");
			
		}
		if(now>=s-x&&now<=s+x){
			now+=v*0.98;
			if(now>s+x)
				printf("n");
			else
				printf("y");
			return 0;
		}
		now+=v*0.98;
		v*=0.98;
	}
	return 0;
}
