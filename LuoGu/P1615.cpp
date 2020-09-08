#include<stdio.h>
int main(){
	long long int a,b,c;
	long long int d,e,f;
	scanf("%d:%d:%d",&a,&b,&c);
	scanf("%d:%d:%d",&d,&e,&f);
	long long int g;
	scanf("%d",&g);
	long long int h,m,s;
	h=d-a;
	m=(e+60-b)%60;
	s=(f+60-c)%60;
    long long int sum;
	sum=(h*3600+m*60+s)*g;
	printf("%lld",sum);
	return 0;
}
