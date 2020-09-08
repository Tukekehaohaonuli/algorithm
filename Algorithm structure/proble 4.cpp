#include<cstdio>
#include<cstring>
const int maxn=1001;
const int INF=1000001;
int G[maxn][maxn];
int visited[maxn];
int d[maxn];
int w[maxn];
int weight[maxn][maxn];
int n,m;
void dijstra(int x){
	for(int i=1;i<=n;i++)
	d[i]=INF;
	d[x]=0;
	w[x]=0;
	for(int i=0;i<n;i++){
		int u=-1,MIN=INF;
		for(int j=1;j<=n;j++){
			if(visited[j]==0&&d[j]<MIN){
				u=j;
				MIN=d[j];
			}
		}
		//printf("%d*******\n",u);
		if(u==-1)return ;
		visited[u]=1;
		for(int v=1;v<=n;v++){
			if(d[u]+G[u][v]<d[v]){
				d[v]=d[u]+G[u][v];
				w[v]=weight[u][v]+w[u];
			//	printf("%d************1\n",w[v]);
			}
			else if(d[u]+G[u][v]==d[v]){
				if(weight[u][v]+w[u]<w[v]){
					w[v]=weight[u][v]+w[u];
				//	printf("%d************2\n",w[v]);
				}
			}
		}
	}
}
int main(){
	while(scanf("%d%d",&n,&m),m||n){
	//	memset(G,INF,sizeof(G);
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				G[i][j]=INF;
				
			}
			w[i]=INF;
		}
		memset(visited,0,sizeof(visited));
	//	memset(w,INF,sizeof(w));
		int x,y,a=INF,b=INF;
		for(int i=0;i<m;i++){
			scanf("%d%d",&x,&y);
			scanf("%d%d",&a,&b);
			if(a<G[x][y]){
				G[x][y]=a;
			G[y][x]=G[x][y];
			weight[x][y]=b;
			weight[y][x]=weight[x][y];
			}
			else if(a==G[x][y]&&b<weight[x][y]){
				weight[x][y]=b;
				weight[y][x]=weight[x][y];
			}
			
		}
		int start,end;
		scanf("%d%d",&start,&end);
		dijstra(start);
		printf("%d %d\n",d[end],w[end]);
	}
	return 0;

} 
