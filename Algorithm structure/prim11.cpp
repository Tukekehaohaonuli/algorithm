#include<cstdio>
#include<algorithm>
using namespace std;
const int MAXV=1000;
const int INF=1000000;
int n,m,G[MAXV][MAXV];
int d[MAXV];
int visited[MAXV];
int prim(){
	fill(d,d+MAXV,INF);
	d[0]=0;
	int ans=0;
	for(int i=0;i<n;i++){
		int u=-1,MIN=INF;
		for(int j=0;j<n;j++){
			if(visited[j]==0&&d[j]<MIN){
				u=j,MIN=d[j];
			}
		}
		if(u==-1) return -1;
		visited[u]=1;
		ans+=d[u];
		for(int v=0;v<n;v++){
			if(visited[v]==0&&G[u][v]<d[v])
			d[v]=G[u][v];
		} 
	}
	return ans;
}
int main(){
	int u,v,w;
	scanf("%d%d",&n,&m);
	fill(G[0],G[0]+MAXV*MAXV,INF);
	for(int i=0;i<m;i++){
		scanf("%d%d%d",&u,&v,&w);
		G[u][v]=G[v][u]=w;
	}
	int ans=prim();
	printf("%d\n",ans);
	return 0;
}
