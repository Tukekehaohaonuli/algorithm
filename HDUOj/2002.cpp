#include<cstdio>
#define PI 3.1415927
int main(){
	double a;
	while(scanf("%lf",&a)!=EOF){
		printf("%.3lf\n",4*PI*a*a*a/3);
	}
	return 0;
}
