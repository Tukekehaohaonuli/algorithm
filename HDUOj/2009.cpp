#include<cstdio>
#include<cmath>
int main(){
	float n,m;
	float ans=0;
	while(scanf("%f%f",&n,&m)!=EOF){
		for(int i=0;i<m;i++){
			ans+=n;
			n=sqrt(n);
		}
		printf("%.2f\n",ans);
		ans=0;
	}
	return 0;
}
