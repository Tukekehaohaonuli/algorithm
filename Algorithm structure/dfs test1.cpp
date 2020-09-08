#include<cstdio>
const int maxn=101;
char matrix[maxn][maxn];
int visited[maxn][maxn];
int dir[][2]={{1,0},{-1,0},{0,1},{0,-1}};
int n,m;
struct Node{
	int x,y;
}start,end;
int ans=maxn;
void dfs(int x,int y,int step){
	if(x==end.x&&y==end.y){
		if(step<ans)
		ans=step;
		return ;
	}
	visited[x][y]=1;
	for(int i=0;i<4;i++){
		int dx=x+dir[i][0];
		int dy=y+dir[i][1];
		if(dx<0||dx>=n||dy<0||dy>=m||matrix[dx][dy]=='*'||visited[dx][dy]){
			continue;
	}
		dfs(dx,dy,step+1);
	}
	visited[x][y]=0;
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%*c%c",&matrix[i][j]);
			if(matrix[i][j]=='S'){
				start.x=i;
				start.y=j;
			}
			if(matrix[i][j]=='T'){
				end.x=i;
				end.y=j;
			}
		}
	}
	dfs(start.x,start.y,0);
	printf("%d",ans);
	return 0;
}
