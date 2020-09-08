#include<cstdio>
int main(){
	double num,price,ans=0;
	while(scanf("%*s")!=EOF){
		scanf("%lf%lf",&num,&price);
		ans+=num*price;
	}
	printf("%.1f\n",ans);
	return 0;
}

