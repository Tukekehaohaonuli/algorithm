#include<cstdio>
const int maxn=101;
const int INF=1000001;
int path[maxn];
int G[maxn][maxn];
int cost[maxn][maxn];
int c[maxn];
int visited[maxn];
int d[maxn];
int n,m,s,e;
void Dijkstra(int s){
	d[s]=0;
	for(int i=0;i<n;i++){
		int u=-1,MIN=INF;
		for(int j=0;j<n;j++){
			if(visited[j]==0&&d[j]<MIN){
				u=j;
				MIN=d[j];
			}
		}
		if(u==-1)
		return ;
		visited[u]=1;
		for(int v=0;v<n;v++){
			if(visited[v]==0&&G[u][v]!=INF){
				if(d[u]+G[u][v]<d[v]){
					d[v]=d[u]+G[u][v];
					c[v]=c[u]+cost[u][v];
					path[v]=u;
				}
				else if(d[u]+G[u][v]==d[v]&&c[u]+cost[u][v]<c[v]){
					c[v]=c[u]+cost[u][v];
					path[v]=u;
				}
			}
		}
	}
}
void dfs(int v){
	if(v==s){
		printf("%d ",v);
		return ;
	}
	dfs(path[v]);
	printf("%d ",v);
}
int main(){
	scanf("%d%d%d%d",&n,&m,&s,&e);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			G[i][j]=INF;
		}
		d[i]=INF;
		path[i]=-1;
	}
	
	int x,y;
	for(int i=0;i<m;i++){
		scanf("%d%d",&x,&y);
		scanf("%d%d",&G[x][y],&cost[x][y]);
	}
	Dijkstra(s);
	dfs(e);
	printf("%d %d",d[e],c[e]);
	return 0;
}
