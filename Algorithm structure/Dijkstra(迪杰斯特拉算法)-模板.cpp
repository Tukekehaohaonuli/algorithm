#include<cstdio>
#include<algorithm>
using namespace std;
int n,m,s;
const int MAXV= 1000;
const int INF=1000000;
int G[MAXV][MAXV];
int d[MAXV];
int visited[MAXV];
void Dijkstra(int s){
	for(int i=0;i<MAXV;i++){
		d[i]=INF;
	}
	d[s]=0;
	for(int i=0;i<n-1;i++){   //i<n-1
		int u=-1,MIN=INF;
		for(int j=0;j<n;j++){
			if(visited[j]==0&&d[j]<MIN){
				u=j;
				MIN=d[j];
			}
		}
		if(u==-1) return;
		visited[u]=1;
		for(int v=0;v<n;v++){
			if(visited[v]==0&&d[u]+G[u][v]<d[v])
			d[v]=d[u]+G[u][v];
		}
	}
} 
int main(){
	int u,v,w;
	scanf("%d%d%d",&n,&m,&s);
	for(int i=0;i<MAXV;i++){
		for(int j=0;j<MAXV;j++){
			G[i][j]=INF;
		}
	}
	for(int i=0;i<m;i++){
		scanf("%d%d%d",&u,&v,&w);
		G[u][v]=w;
	}
	Dijkstra(s);
	for(int i=0;i<n;i++)
	printf("%d ",d[i]);
	return 0;
}
