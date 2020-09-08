#include<cstdio>
#include<queue>
const int maxn=101;
using namespace std;
int dir[][2]={{0,1},{0,-1},{1,0},{-1,0}};
char G[maxn][maxn];
int visited[maxn][maxn];
int n,m;
int ans;
struct Node{
	int x,y;
	int dept;
}node,start,end1;
int bfs(int x,int y){
	node.x=x,node.y=y;
	queue<Node>q;
	q.push(node);
	while(!q.empty()){
		Node newnode=q.front();
		q.pop();
		visited[newnode.x][newnode.y]=1;
		if(newnode.x==end1.x&&newnode.y==end1.y)
		return newnode.dept;
		for(int i=0;i<4;i++){
			int dx=newnode.x+dir[i][0];
			int dy=newnode.y+dir[i][1];
			if(dx<0||dx>=n||dy<0||dy>=m||visited[dx][dy]||G[dx][dy]=='*')
			continue;
			node.x=dx;
			node.y=dy;
			node.dept=newnode.dept+1;
			q.push(node);
		}
	} 
	return -1;
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%*c%c",&G[i][j]);
			if(G[i][j]=='S')
			start.x=i,start.y=j;
			if(G[i][j]=='T')
			end1.x=i,end1.y=j;
		}
	}
	printf("%d",bfs(start.x,start.y));
	return 0;
	
}
