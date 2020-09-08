#include<cstdio>
#include<cmath>
int n,k;
int t[21];
int ans;
bool is_Prime(int n){
	if(n==1)
	return false;
	int sqr=sqrt(n*1.0);
	for(int i=2;i<=sqr;i++)
	if(n%i==0)return false;
	return true;
}
void dfs(int dept,int sum,int i){
	if(dept==k){
		if(is_Prime(sum))
		ans++;
		return ;
	}
	if(i<n){
		dfs(dept+1,sum+t[i],i+1);
		dfs(dept,sum,i+1);
	}
}
int main(){
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
	scanf("%d",t+i);
	dfs(0,0,0);
	printf("%d",ans);
	return 0;
}
