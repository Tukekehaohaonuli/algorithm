#include<cstdio>
const int maxn =101;
int visited[maxn][maxn];
int matrix[maxn][maxn];
int dir[][2]={{1,0},{-1,0},{0,1},{0,-1}};
int x,y,ans,m,n;
void dfs(int x,int y){
	visited[x][y]=1;
	for(int i=0;i<4;i++){
		int dx=x+dir[i][0];
		int dy=y+dir[i][1];
		if(dx<0||dx>=m||dy<0||dy>=n||visited[dx][dy]||matrix[dx][dy]==0)
		continue;
		dfs(dx,dy);
	}
}
int main(){
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(matrix[i][j]&&visited[i][j]==0){
				ans++;
				dfs(i,j);
			}
		}
	}
	printf("%d",ans);
}
