#include<cstdio>
#include<queue>
using namespace std;
struct Node{
	int x,y;
}node;
const int maxn=101;
int G[maxn][maxn];
int visited[maxn][maxn];
int dir[][2]={{-1,0},{1,0},{0,1},{0,-1}};
int m,n;
void bfs(int x,int y){
	queue<Node> q;
	node.x=x,node.y=y;
	q.push(node);
	visited[x][y]=1;
	while(!q.empty()){
		Node newnode=q.front();
		
		q.pop();
		for(int i=0;i<4;i++){
			int dx=newnode.x+dir[i][0];
			int dy=newnode.y+dir[i][1];
			if(dx<0||dx>=m||dy<0||dy>=n||visited[dx][dy]||G[dx][dy]!=G[x][y])
			continue;
			node.x=dx;
			node.y=dy;
			visited[dx][dy]=1;
			q.push(node);
		}
	}
}
int main(){
	int ans=0;
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&G[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(visited[i][j]==0){
				ans++;
				bfs(i,j);
			}
		}
	}
	printf("%d",ans);
	return 0;
}
