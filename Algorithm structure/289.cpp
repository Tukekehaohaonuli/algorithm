#include<cstdio>
const int maxn=101;
int dir[][2]={{1,0},{0,1},{-1,0},{0,-1},{1,1},{-1,1},{-1,-1},{1,-1}};
int G[maxn][maxn];
int m,n;
bool isLive(int x,int y){
	if(x<0||y<0||x>=m||y>=n){
		return false;
	}
	else{
		if(G[x][y]==1){
			return true;
		}
		else {
			return false;
		}
	}
}
int main(){
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&G[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			int ans=0;
		//	printf("%d%c",G[i][j],j==n-1?'\n':' ');
			for(int k=0;k<8;k++){
				int dx=i+dir[k][0];
				int dy=j+dir[k][1];
				if(isLive(dx,dy))
				ans++;
			}
			printf("%d********\n",ans);
			if(G[i][j]==0&&ans==3)
			G[i][j]=1;
			else if(G[i][j]==1&&(ans<2||ans>3))
			G[i][j]=0;
		//	
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d%c",G[i][j],j==n-1?'\n':' ');
		}
	}
	return 0;
}
