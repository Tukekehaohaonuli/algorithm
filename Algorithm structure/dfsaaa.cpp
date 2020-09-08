#include<cstdio>
const int maxn=101;
int G[maxn][maxn];
int visited[maxn][maxn];
int dir[][2]={{0,1},{0,-1},{1,0},{-1,0}};
int m,n;
void dfs(int x,int y){
	visited[x][y]=1;
	for(int i=0;i<4;i++){
		int dx=x+dir[i][0];
		int dy=y+dir[i][1];
		if(dx<0||dx>=m||dy<0||dy>=n||G[dx][dy]==0||visited[dx][dy]){
			continue;
		}
		dfs(dx,dy);
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
			if(visited[i][j]==0&&G[i][j]==1){
				ans++;
				dfs(i,j);
			}
		}
	}
	printf("%d",ans);
	return 0;
}
