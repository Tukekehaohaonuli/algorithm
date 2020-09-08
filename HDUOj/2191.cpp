#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=2005;
int dp[maxn][maxn];
int w[maxn];
int c[maxn];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		int a,b,d;
		int cnt=1;
		scanf("%d%d",&n,&m);
		for(int i=0;i<m;i++){
			scanf("%d%d%d",&a,&b,&d);
			while(d--){
				w[cnt]=a;
				c[cnt]=b;
				cnt++;
			}
		}
	//	dp[0][0]=1;
		for(int i=1;i<=cnt;i++){
			for(int j=w[i];j<=n;j++){
//				if(j-w[i]<0)
//				dp[i][j]=dp[i-1][j];
//				else
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+c[i]);
			}
		}
		printf("%d\n",dp[cnt][n]);
	}
	return 0;
}
