#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=101;
const int INF=100001;
int G[maxn][maxn];
int visited[maxn];
int d[maxn];
int t,s,e,n;
int start[maxn],end1[maxn];
void dijstra(int x){
	for(int i=1;i<=n;i++)
	d[i]=INF;
	d[x]=0;
	for(int i=0;i<n;i++){
		int u=-1,MIN=INF;
		for(int j=1;j<=n;j++){
			if(visited[j]==0&&d[j]<MIN){
				u=j;
				MIN=d[j];
			}
		}
		if(u==-1)return ;
		visited[u]=1;
		for(int v=1;v<=n;v++){
			if(G[u][v]+d[u]<d[v])
			d[v]=G[u][v]+d[u];
		}
	}
}
int main(){
	while(scanf("%d%d%d",&t,&s,&e)!=EOF){
	int x,y,cost;
	fill(G[0],G[0]+maxn*maxn,INF);
	for(int i=0;i<t;i++){
		scanf("%d%d%d",&x,&y,&cost);
		if(x>n)
		n=x;
		if(y>n)
		n=y;
		if(G[x][y]>cost) G[x][y]=G[y][x]=cost;
	}
	for(int i=0;i<s;i++)
	scanf("%d",start+i);
	for(int i=0;i<e;i++)
	scanf("%d",end1+i);
	int ans=1000001;
	for(int i=0;i<s;i++){
		fill(visited,visited+maxn,0);
		dijstra(start[i]);
		for(int j=0;j<e;j++){
			if(d[end1[j]]<ans)
			ans=d[end1[j]];
		}
	}
	printf("%d\n",ans);
}
}
