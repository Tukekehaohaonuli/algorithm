#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=10001;
int dp[maxn],a[maxn];
int main(){
// 	int n;
// 	scanf("%d",&n);
 	for(int i=0;i<6;i++)
 	scanf("%d",a+i);
 	dp[0]=a[0];
 	int max1=dp[0];
 	for(int i=1;i<6;i++){
 		dp[i]=max(a[i],dp[i-1]+a[i]);
 		if(dp[i]>max1)
 		max1=dp[i];
	}
	printf("%d",max1);
	return 0;
 }
