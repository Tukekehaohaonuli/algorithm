#include<cstdio>
//#include<cmath>
const int maxn=51;
__int64 dp[maxn];   //0非法，1合法 
int main(){
	dp[1]=3,dp[2]=6;
	for(int i=3;i<51;i++){
		dp[i]=dp[i-1]+dp[i-2]*2;
	}
	int n;
	while(scanf("%d",&n)!=EOF){
		printf("%I64d\n",dp[n]);
	}
	return 0;
} 
