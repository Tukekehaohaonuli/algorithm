#include<cstdio>
int main(){
	long long int ans[51]={0,1,2};
	for(int i=3;i<51;i++)
	ans[i]=ans[i-1]+ans[i-2];
	int a;
	while(scanf("%d",&a)!=EOF){
		printf("%lld\n",ans[a]);
	}
	return 0;
}
