#include<cstdio>
int ans[11],kind;
int res[10000][11];
void dfs(int dept,int sum){
	if(dept==10){
		ans[dept]+=sum;
		for(int i=0;i<11;i++){
			res[kind][i]=ans[i];
		}
		kind++;
		ans[dept]-=sum;
		return ;
	}
	for(int i=0;i<=sum;i++){
		ans[dept]+=i;
		dfs(dept+1,sum-i);
		ans[dept]-=i;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<11;i++)
	ans[i]=1;
	dfs(0,n-10);
	printf("%d\n",kind-1);
	for(int i=0;i<kind;i++){
		for(int j=0;j<11;j++){
			printf("%d%c",res[i][j],j==10?'\n':' ');
		}
	}
	return 0;
}
