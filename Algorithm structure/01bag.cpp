#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn =101;
int dp[maxn][maxn];
int w[maxn];
int c[maxn];
int n,v;
int main(){
	scanf("%d%d",&n,&v);
	for(int i=1;i<=n;i++){
		scanf("%d",w+i);
	}
	for(int i=1;i<=n;i++)
	scanf("%d",c+i);
	for(int i=1;i<=n;i++){
		for(int j=w[i];j<=v;j++){
			dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+c[i]);
		}
	}
	printf("%d",dp[n][v]);
	return 0;
} 
