#include<cstdio>
const int maxn=31;
int dp[maxn]={0,1,3};
int main(){
	for(int i=3;i<31;i++){
		dp[i]=dp[i-1]+dp[i-2]*2;
	}
	int c;
	scanf("%d",&c);
	int n;
	while(c--){
		scanf("%d",&n);
		printf("%d\n",dp[n]);
	}
	return 0;
}
