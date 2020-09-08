#include<cstdio>
const int maxn=25;
int visited[maxn];
int ans[maxn];
int n,m;
void dfs(int dept,int x){
	if(dept==m){
		for(int i=0;i<dept;i++)
		printf("%d%c",ans[i],i==dept-1?'\n':' ');
		return ;
	}
	visited[x]=1;
	for(int i=0;i<n;i++){
		if(!visited[i]){
			ans[dept]=i+1;
			visited[i]=1;
			dfs(dept+1,i);
			visited[i]=0;
		}
	}
	visited[x]=0;
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		ans[0]=i+1;
		dfs(1,i);
	}
	return 0;
}
