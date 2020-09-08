#include<cstdio>
#include<cmath>
int main(){
	double a;
	while(scanf("%lf",&a)!=EOF){
		printf("%.2lf\n",fabs(a));
	}
	return 0;
}
