#include<cstdio>
#include<cmath>
const int maxn=21;
int dp[maxn];
int n,k;
int ans;
bool isprime(int x){
	int sqr=sqrt(1.0*x);
	for(int i=2;i<=sqr;i++){
		if(x%i==0)
		return false;
	}
	return true;
}
void dfs(int x,int dept,int sum){
//	printf("%d %d %d-----------\n",x,dept,sum);
	if(x>n)
	return ;
	if(dept==k){
		if(isprime(sum))
		ans++;
//		printf("%d*******\n",sum);
		return ;
	}
	dfs(x+1,dept+1,sum+dp[x]);
	dfs(x+1,dept,sum);
}
int main(){
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",dp+i);
	}
	dfs(0,0,0);
	printf("%d",ans);
}
