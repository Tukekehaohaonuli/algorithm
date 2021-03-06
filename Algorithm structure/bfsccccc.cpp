#include<cstdio>
#include<queue>
using namespace std;
struct Node{
	int x,y;
	int dept;
}s,e,node;
const int maxn=101;
char G[maxn][maxn];
int dir[][2]={{1,0},{-1,0},{0,1},{0,-1}};
int visited[maxn][maxn];
int m,n;
int bfs(){
	queue<Node>q;
	q.push(s);
	visited[s.x][s.y];
	while(!q.empty()){
		Node newnode=q.front();
		q.pop();
		if(newnode.x==e.x&&newnode.y==e.y)
		return newnode.dept;
		for(int i=0;i<4;i++){
			int dx=newnode.x+dir[i][0];
			int dy=newnode.y+dir[i][1];
			if(dx<0||dx>=m||dy<0||dy>=n||visited[dx][dy]||G[dx][dy]=='*')
			continue;
			node.x=dx,node.y=dy,node.dept=newnode.dept+1;
			q.push(node);
			visited[dx][dy]=1;
		}
	}
}
int main(){
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%*c%c",&G[i][j]);
			if(G[i][j]=='S'){
				s.x=i,s.y=j;
			}
			if(G[i][j]=='T'){
				e.x=i,e.y=j;
			}
		}
	}
	printf("%d",bfs());
	return 0;
}
