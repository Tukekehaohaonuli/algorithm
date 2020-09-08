#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=101;
const int INF=999999;
int G[maxn][maxn];
int d[maxn];
int visited[maxn];
int weight[maxn];
int w[maxn];
int num[maxn];
int n,m,st,ed;
void dijkstra(int s){
	fill(d,d+maxn,INF);
	d[s]=0;
	fill(w,w+maxn,0);
	w[s]=weight[s];
	fill(num,num+maxn,0);
	num[s]=1;
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
			if(visited[v]==0&&G[u][v]<INF){
				if(G[u][v]+d[u]<d[v]){
					d[v]=G[u][v]+d[u];
					num[v]=num[u];
					w[v]=w[u]+weight[v];
				}
				else if(G[u][v]+d[u]==d[v]){
					if(w[u]+weight[v]>w[v]){
						w[v]=w[u]+weight[v];
					}
					num[v]+=num[u];
				}
			}
		}
	}
}
int main(){
	scanf("%d%d%d%d",&n,&m,&st,&ed);
	for(int i=0;i<n;i++){
		scanf("%d",&weight[i]);
	}
	int u,v;
	fill(G[0],G[0]+maxn*maxn,INF);
	for(int i=0;i<m;i++){
		scanf("%d%d",&u,&v);
		scanf("%d",&G[u][v]);
		G[v][u]=G[u][v];
	}
	dijkstra(st);
	printf("%d %d",num[ed],w[ed]);
	return 0;
}
