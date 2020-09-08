// dp[i]  i个物体时最大 表示体积 
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=201;
int dp[maxn][maxn];
int V,n;
int v[maxn],c[maxn];
int main(){
	scanf("%d%d",&V,&n);
	for(int i=1;i<=n;i++){
		scanf("%d",v+i);
		c[i]=v[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<=V;j++){
			if(j>=v[i])
			dp[i][j]=max(dp[i-1][j],dp[i-1][j-v[i]]+c[i]);
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	printf("%d",V-dp[n][V]);
	return 0;
} 
