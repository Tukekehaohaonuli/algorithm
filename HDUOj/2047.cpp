#include<cstdio>
//#include<cmath>
const int maxn=41;
__int64 dp[maxn][2];   // ½áÎ²ÎªO  
int n;
int main(){
	dp[1][0]=1,dp[1][1]=2;
	for(int i=2;i<maxn;i++){
		dp[i][0]=dp[i-1][1];
		dp[i][1]=(dp[i-1][0]+dp[i-1][1])*2;
	}
	while(scanf("%d",&n)!=EOF){
		printf("%I64d\n",dp[n][0]+dp[n][1]);
	}
	return 0;
}
__int64 
%I64d
