#include<cstdio>
#include<algorithm>
using namespace std; 
const int maxn=101;
int dp[maxn][maxn];
int w[maxn],c[maxn];
int T,M;
int main(){
	scanf("%d%d",&T,&M);
	for(int i=1;i<=M;i++){
		scanf("%d%d",w+i,c+i);
	}
	for(int i=1;i<=M;i++){
		for(int j=0;j<=T;j++){
			if(j>=w[i])
			dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+c[i]);
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	printf("%d\n",dp[M][T]);
	return 0;
}

