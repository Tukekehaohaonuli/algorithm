#include<cstdio>
const int maxn=101;
char G[maxn][maxn];
char temp[maxn][maxn];
char g[maxn][maxn];
int m,n,s,t;
int ans;
bool isEqual(char G[maxn][maxn],int x,int y){
	for(int i=0;i<s;i++){
		for(int j=0;j<t;j++){
			if(G[x+i][y+j]!=g[i][j])
			return false;
		}
	}
	return true;
} 
void getTemp(char G[maxn][maxn],int x,int y){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			temp[i][j]=G[i][j];
		}
	}
	for(int i=0;i<s;i++){
		for(int j=0;j<t;j++){
			temp[x+i][y+j]='0';
		}
	}
}
void dfs(char G[maxn][maxn],int x,int y,int num){
	if(x==m){
		if(num>ans)
		ans=num;
		return ;
	}
	for(int i=y;i<n;i++){
		if(isEqual(G,x,i)){
			getTemp(G,x,i);
			dfs(temp,x,i+t,num+1);
		}
	}
	dfs(G,x+1,0,num);
}
int main(){
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%*c%c",&G[i][j]);
		}
	}
	scanf("%d%d",&s,&t);
	for(int i=0;i<s;i++){
		for(int j=0;j<t;j++){
			scanf("%*c%c",&g[i][j]);
		}
	}
	dfs(G,0,0,0);
	printf("%d",ans);
	return 0;
}
