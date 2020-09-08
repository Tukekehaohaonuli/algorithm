#include<cstdio>
const int maxn=101;
char G[maxn][maxn];
int dir[][2]={{1,0},{-1,0},{0,1},{0,-1}};
int visited[maxn][maxn];
int m,n,ans=100;
int sx,sy,ex,ey;
void dfs(int dept,int x,int y){
	if(x==ex&&y==ey){
		if(dept<ans)
		ans=dept;
		return ;
	}
	visited[x][y]=1;
	for(int i=0;i<4;i++){
		int dx=x+dir[i][0];
		int dy=y+dir[i][1];
		if(dx<0||dx>=m||dy<0||dy>=n||visited[dx][dy]||G[dx][dy]=='*')
		continue;
		dfs(dept+1,dx,dy);
	}
	visited[x][y]=0;
}
int main(){
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%*c%c",&G[i][j]);
			if(G[i][j]=='S'){
				sx=i,sy=j;
			}
			if(G[i][j]=='T'){
				ex=i,ey=j;
			}
		}
	}
	dfs(0,sx,sy);
	printf("%d",ans);
	return 0;
	
}
