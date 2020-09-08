#include<cstdio>
int map[6][6];
int visited[6][6];
int dir[][2]{{0,1},{0,-1},{1,0},{-1,0}};
int cc[6][6];
int m,n,t;
int sx,sy,ex,ey;
int ans;
void dfs(int x,int y){
	if(x==ex&&y==ey)
	ans++;
	else{
		visited[x][y]=1;
		for(int i=0;i<4;i++){
			int dx=x+dir[i][0];
			int dy=y+dir[i][1];
			if(dx<=0||dx>n||dy<=0||dy>m||visited[dx][dy]==1||cc[dx][dy]==1)
				{continue;
			//	printf("---\n");
				}
			dfs(dx,dy);	
		}
		visited[x][y]=0;
	}
}
int main(){
	int tx,ty;
	scanf("%d%d%d",&n,&m,&t);
	scanf("%d%d%d%d",&sx,&sy,&ex,&ey);
	for(int i=0;i<t;i++){
		scanf("%d%d",&tx,&ty);
		cc[tx][ty]=1;
	}
	dfs(sx,sy);
	printf("%d",ans);
	return 0;
}
