#include<cstdio>
const int maxn=301;
const int INF=100001;
int G[maxn][maxn];
int visited[maxn];
int d[maxn];
int ans,n;
void prime(int x){
	for(int i=0;i<=n;i++){
		d[i]=INF;
	}
	d[x]=0;
	for(int i=0;i<=n;i++){
		int u=-1,MIN=INF;
		for(int j=0;j<=n;j++){
			if(visited[j]==0&&d[j]<MIN){
				u=j;
				MIN=d[j];
			}
		}
		visited[u]=1;
		ans+=d[u];
		for(int v=0;v<=n;v++){
			if(visited[v]==0&&G[u][v]<d[v]){
				d[v]=G[u][v];
			}
		}
	}
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	scanf("%d",&G[0][i]);
	G[i][0]=G[0][i];
}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&G[i][j]);
		}
	}
//	for(int i=0;i<n;i++)
//	G[i][i]=INF;
	prime(0);
	printf("%d",ans);
	return 0;
}
