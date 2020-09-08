#include<cstdio>
const int maxn=302;
const int INF=10001;
int visited[maxn];
int G[maxn][maxn];
int d[maxn];
int n,ans;
void Prime(){
	for(int i=0;i<=n;i++)
	d[i]=INF;
	d[0]=0;
	for(int i=0;i<=n;i++){
		int u=-1,MIN=INF;
		for(int j=0;j<=n;j++){
			if(visited[j]==0&&d[j]<MIN){
				u=j;
				MIN=d[j];
			}
		}
		if(u==-1)return ;
		visited[u]=1;
		ans+=d[u];
	//	printf("%d %d*******\n",u,ans);
		for(int v=0;v<=n;v++){
			if(G[u][v]<d[v]){
				d[v]=G[u][v];
			}
		}
	}
}
int main(){
	scanf("%d",&n);
	int cost;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			G[i][j]=INF;
		}
	}
	for(int i=1;i<=n;i++){
		scanf("%d",&cost);
		G[0][i]=G[i][0]=cost;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&G[i][j]);
		}
	}
	Prime();
	printf("%d",ans);
}
