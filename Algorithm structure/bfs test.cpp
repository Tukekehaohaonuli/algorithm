#include<cstdio>
#include<queue>
# include<bits/stdc++.h>
using namespace std;
using namespace std;
const int maxn=100;
	int ans=0;
struct Node{
	int x,y;
}node;
int n,m;
int matrix[maxn][maxn];
int visited[maxn][maxn];
int dir[][2]={{1,0},{-1,0},{0,1},{0,-1}};
bool judge(int x,int y){
	if(x<0||x>=m||y<0||y>=n||matrix[x][y]==0||visited[x][y])
	return false;
	
	return true;
}
void bfs(int x,int y){
	queue <Node> q;
	node.x=x,node.y=y;
	q.push(node);
	visited[x][y]=1;
	while(!q.empty()){
		Node top=q.front();
		q.pop();
		for(int i=0;i<4;i++){
			int dx=top.x+dir[i][0];
			int dy=top.y+dir[i][1];
			if(judge(dx,dy)){
				node.x=dx,node.y=dy;
				q.push(node);
				visited[dx][dy]=1;
			}
		}
	}
		cout << "*********************************" << endl;
	for (int x = 0; x < n; x++){
		for (int y = 0; y < m; y++){
			cout << visited[x][y] << (y == m-1 ? "\n" : " ");
		}
	}
	cout << "ans= " << ans << "**************" << endl;
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
				bfs(i,j);
			}
		}
	}
	printf("%d",ans);
	return 0;
}
