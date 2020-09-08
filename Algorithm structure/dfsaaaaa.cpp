#include<cstdio>
const int maxn=101;
char G[maxn][maxn];
int visited[maxn][maxn];
int dir[][2]={{0,1},{0,-1},{1,0},{-1,0}};
int n,m;
int ans=100;
int startx,starty,endx,endy;
void dfs(int x,int y,int num){
	if(x==endx&&y==endy){
		if(num<ans)
		ans=num;
		return ;
	}
	visited[x][y]=1;
	for(int i=0;i<4;i++){
		int dx=x+dir[i][0];
		int dy=y+dir[i][1];
		if(dx<0||dy<0||dx>=n||dy>=m||visited[dx][dy]||G[dx][dy]=='*')
		continue;
		dfs(dx,dy,num+1);
	}
	visited[x][y]=0;
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%*c%c",&G[i][j]);
			if(G[i][j]=='S'){
				startx=i;starty=j;
			}
			if(G[i][j]=='T')
			endx=i,endy=j;
		}
	}
	dfs(startx,starty,0);
	printf("%d",ans);
	return 0;
}
