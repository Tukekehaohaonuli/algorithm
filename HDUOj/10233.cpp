#include<cstdio>
const int maxn=507;
const int INF=100001;
int G[maxn][maxn];
int d[maxn];
int visited[maxn];
int t,n;

int prime(int v){
	for(int i=0;i<n;i++)
	d[i]=INF;
	d[v]=0;
	int ans=0;
	for(int i=0;i<n;i++){
		int u=-1,MIN=INF;
		for(int j=0;j<n;j++){
			if(visited[j]==0&&d[j]<MIN){
				u=j;
				MIN=d[j];
			}
		}
		if(u==-1)return -1;
		visited[u]=1;
		ans+=d[u];
		for(int v=0;v<n;v++){
			if(visited[v]==0&&G[u][v]<d[v]){
				d[v]=G[u][v];
			}
		}
	}
	return ans;
}
int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				scanf("%d",&G[i][j]);
			}
		}
		for(int i=0;i<n;i++)
		visited[i]=0;
		printf("%d\n",prime(0));
	}
	return 0;
}
