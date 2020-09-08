#include<cstdio>
#include<queue>
using namespace std;
const int maxn =101;
char maze[maxn][maxn];
int visited[maxn][maxn];
int dir[][2]={{1,0},{-1,0},{0,1},{0,-1}};
int n,m;
struct Node{
	int x,y;
	int step;
}T,node;
int bfs(int x,int y){
	queue<Node> q;
	node.x=x,node.y=y;
	q.push(node);
	visited[x][y]=1;
	while(!q.empty()){
		Node top=q.front();
		q.pop();
		if(top.x==T.x&&top.y==T.y)
		return top.step;
		for(int i=0;i<4;i++){
			int dx=top.x+dir[i][0];
			int dy=top.y+dir[i][1];
			if(dx<0||dx>=n||dy<0||dy>=m||maze[dx][dy]=='*'||visited[dx][dy])
			continue;
			node.x=dx,node.y=dy;
			node.step=top.step+1;
			q.push(node);
			visited[dx][dy]=1;
		}
	}
	return -1;
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%*c%c",&maze[i][j]);
			if(maze[i][j]=='S'){
				start.x=i;
				start.y=j;
			}
			if(maze[i][j]=='T'){
				T.x=i;
				T.y=j;
			}
		}
	}
	
	printf("*************");
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	printf("%c",maze[i][j]);
	start.step=0;
	int ans=bfs(start.x,start.y);
	printf("%d",ans);
	return 0;
}







