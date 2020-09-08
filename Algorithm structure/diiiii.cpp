#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=101;
const int INF=999999;
int d[maxn];
int G[maxn][maxn];
int visited[maxn];
int n,m,s;
void dijkstra(int s){
	for(int i=0;i<n;i++){
		d[i]=INF;
	}
	d[s]=0;
	for(int i=0;i<n;i++){
		int u=-1,MIN=INF;
		for(int j=0;j<n;j++){
			if(d[j]<MIN&&visited[j]==0){
				u=j;
				MIN=d[j];
			}
		}
		if(u==-1)return ;
		visited[u]=1;
		for(int v=0;v<n;v++){
			if(G[u][v]+d[u]<d[v]&&visited[v]==0){
				d[v]=G[u][v]+d[u];
			}
		}
	}
}
int main(){
	int u,v,w;
	scanf("%d%d%d",&n,&m,&s);
	fill(G[0],G[0]+maxn*maxn,INF);
	for(int i=0;i<m;i++){
		scanf("%d%d",&u,&v);
		scanf("%d",&w);
		G[u][v]=w;
	}
	dijkstra(s);
	for(int i=0;i<n;i++)
	printf("%d ",d[i]);
	return 0;
}
