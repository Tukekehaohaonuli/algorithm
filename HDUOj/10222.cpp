#include<cstdio>
#include<cstring>
const int maxn=1001;
int T;
char c[maxn];
int dp[maxn][maxn];
int main(){
	scanf("%d%*c",&T);
	while(T--){
		gets(c+1);
		int ans=1;
		memset(dp,0,sizeof(dp));
		int len=strlen(c+1);
//		printf("*********%d",len);
		for(int i=1;i<=len;i++)
		dp[i][i]=1;
		for(int i=1;i<len;i++){
			for(int j=i+1;j<=len;j++){
				if(c[i]==c[j]){
					dp[i][j]=1;
					ans=2;
				}
				
			}
		}
		for(int L=3;L<=len;L++){
			for(int i=1;i+L-1<=len;i++){
				int j=i+L-1;
				if(c[i]==c[j]&&dp[i+i][j-1]==1){
					dp[i][j]=1;
					ans=L;
				}
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
