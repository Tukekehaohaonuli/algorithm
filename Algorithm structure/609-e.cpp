#include<cstdio>
const int maxn=16;
int dir[][2]={{0,-1},{-1,0,},{0,1},{1,0}};
int G[maxn][maxn];
int visited[maxn][maxn];
int n,m;
int num;
struct Node{
	int x,y;
}node[250];
Node s,e;
void dfs(int x,int y,int dept){
	visited[x][y]=1;
	node[dept].x=x,node[dept].y=y;
	if(x==e.x&&y==e.y){
	//	node[dept].x=x,node[dept].y=y;
		for(int i=0;i<dept;i++){
			printf("(%d,%d)->",node[i].x,node[i].y);
		}
		printf("(%d,%d)\n",e.x,e.y);
		num=1; 
		visited[x][y]=0;
		return ;
	}
	for(int i=0;i<4;i++){
		int dx=x+dir[i][0];
		int dy=y+dir[i][1];
		if(dx<=0||dy<=0||dx>n||dy>m||visited[dx][dy]||G[dx][dy]==0)
		continue;
		dfs(dx,dy,dept+1);
	}
	visited[x][y]=0;
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d",&G[i][j]);
		}
	}
	scanf("%d%d%d%d",&s.x,&s.y,&e.x,&e.y);
//	printf("*******");
	dfs(s.x,s.y,0);
	if(num==0)
	printf("-1");
	return 0;
}
