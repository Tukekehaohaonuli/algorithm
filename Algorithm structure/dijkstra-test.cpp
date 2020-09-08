#include<cstdio>
const int maxn=101;
const int INF=100001;
int G[maxn][maxn];
int num[maxn];
int weight[maxn];
int w[maxn];
int d[maxn];
int visited[maxn];
int n,m;
void Dijkstra(int s){
	d[s]=0;
//	visited[s]=1;
	for(int i=0;i<n-1;i++){
		int u=-1,MIN=INF;
		for(int j=0;j<n;j++){
			if(visited[j]==0&&d[j]<MIN){
				u=j;
				MIN=d[j];
			}
		}
		if(u==-1)return;
		visited[u]=1;
		for(int v=0;v<n;v++){
			if(visited[v]==0&&G[u][v]!=INF){
				if(d[u]+G[u][v]<d[v]){
					num[v]=num[u];
					d[v]=d[u]+G[u][v];
					w[v]=weight[v]+w[u];
				}
				else if(d[u]+G[u][v]==d[v]){
					num[v]+=num[u];
					if(weight[v]+w[u]>w[v])
					w[v]=weight[v]+w[u];
				}
			}
		}
//		printf("\n************");
//		for(int k=0;k<n;k++)
//		printf("%d",num[k]);
	}
}
int main(){
	int s,e;
	scanf("%d%d%d%d",&n,&m,&s,&e);
	for(int i=0;i<n;i++){
		scanf("%d",weight+i);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			G[i][j]=INF;
		}
	}
	int x,y,dis;
	for(int i=0;i<m;i++){
		scanf("%d%d%d",&x,&y,&dis);
		G[x][y]=dis;
		G[y][x]=G[x][y];
	}
	for(int i=0;i<n;i++){
		d[i]=INF;
	}
	num[s]=1,w[s]=weight[s];
	Dijkstra(s);
	printf("%d %d",num[e],w[e]);
	return 0;
}
