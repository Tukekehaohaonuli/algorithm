#include<cstdio>
#include<cstring>
const int maxn=501;
int line[maxn][maxn],visited[maxn],girl[maxn];
int k,m,n;
int Find(int x){
	for(int i=1;i<=n;i++){
		if(line[x][i]==1&&visited[i]==0){
			visited[i]=1;
			if(girl[i]==0||Find(girl[i])){
				girl[i]=x;
				return 1;
			}
		}
	}
	return 0;
}
int main(){
	while(scanf("%d%d%d",&k,&m,&n),k){
		int a,b;
	//	printf("%d %d %d**********\n",k,m,n);
		memset(line,0,sizeof(line));
		memset(visited,0,sizeof(visited));
		memset(girl,0,sizeof(girl));
		for(int i=0;i<k;i++){
			scanf("%d%d",&a,&b);
			line[a][b]=1;
		}
		int sum=0;
		for(int i=1;i<=m;i++){
			memset(visited,0,sizeof(visited));
			if(Find(i)) sum++;
		}
		printf("%d\n",sum);
	}
	return 0;
}
