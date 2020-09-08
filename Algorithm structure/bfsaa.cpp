#include<cstdio>
#include<queue>
using namespace std;
const int maxn=101;
int dir[][2]={{0,1},{0,-1},{1,0},{-1,0}};
int G[maxn][maxn];
int visited[maxn][maxn];
int m,n;
struct Node{
	int x,y;
}node;
void bfs(int x,int y){
	node.x=x,node.y=y;
	queue<Node> q;
	q.push(node);
	while(!q.empty()){
		Node newnode=q.front();
		q.pop();
		visited[newnode.x][newnode.y]=1;
		for(int i=0;i<4;i++){
			int dx=newnode.x+dir[i][0];
			int dy=newnode.y+dir[i][1];
			if(dx<0||dx>=m||dy<0||dy>=n||G[dx][dy]==0||visited[dx][dy])
			continue;
			node.x=dx;
			node.y=dy;
			q.push(node);
		}
	}
}
int main(){
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&G[i][j]);
		}
	}
	int ans=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(G[i][j]==1&&visited[i][j]==0){
				ans++;
				bfs(i,j);
			}
		}
	}
	printf("%d",ans);
	return 0;
}
