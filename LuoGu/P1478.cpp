#include<cstdio>
int dp[5001][1001];
int main(){

	int n,s,a,b;
	scanf("%d%d%d%d",&n,&s,&a,&b);
	int v[5001],w[5001];
	for(int i=1;i<=n;i++){
		scanf("%d%d",v+i,w+i);
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<=s;j++){
			dp[i][j]=dp[i-1][j];
			if(v[i]<=a+b&&w[i]<=j){
				dp[i][j]=dp[i-1][j]>dp[i-1][j-w[i]]+1?dp[i-1][j]:dp[i-1][j-w[i]]+1;
			}
		}
	}
	printf("%d",dp[n][s]);
	return 0;
}
