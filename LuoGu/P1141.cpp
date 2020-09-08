#include<cstdio>
int graph[1001][1001];
int visited[1001][1001];
int dir[][2]={{1,0},{-1,0},{0,1},{0,-1}};
int n,m;
int ans[1001][1001];
void dfs(int x,int y){
	visited[x][y]=1;
	for(int i=0;i<4;i++){
		int dx=x+dir[i][0];
		int dy=y+dir[i][1];
		if(dx<1||dx>n||dy<1||dy>n||visited[dx][dy]){
			continue;
		}
		if(graph[x][y]!=graph[dx][dy])
			{	
			//	visited[dx][dy]=1;
				dfs(dx,dy);
			//	visited[dx][dy]=1;
			} 
		
	}
//	visited[x][y]=0;
}
int main(){
	scanf("%d%d",&n,&m);
	char c;
	for(int i=1;i<=n;i++){
			c=getchar();
		for(int j=1;j<=n;j++){
			c=getchar();
			graph[i][j]=int(c-'0');
	}
	}
	for(int q=1;q<=n;q++){
	for(int w=1;w<=n;w++)
		{
		dfs(q,w);
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(visited[i][j]){
					ans[q][w]++;
					visited[i][j]=0;
				}
  			}
		}
	}
}
	while(m--){
		int a,b;
		scanf("%d%d",&a,&b);
		printf("%d\n",ans[a],ans[b]);
	}
	return 0;
}
