#include<cstdio>
const int maxn=110;
int mp[maxn][maxn];
int visited[maxn];
int n,m;
bool topologicalSort(){
	int num=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(visited[j]==0){
				visited[j]--;
				num++;
				for(int k=0;k<n;k++){
					if(mp[j][k]==1)
					visited[k]--;
				}
				break;
			}
		}
	}
	if(num==n)
	return true;
	else
	return false;
}
int main(){
	scanf("%d%d",&n,&m);
	int x,y;
	for(int i=0;i<m;i++){
		scanf("%d%d",&x,&y);
		mp[x][y]=1;
		visited[y]++;
	}
	if(topologicalSort())
	printf("yyyyyyyyyyyy");
	else{
		printf("nnnnnnnnnnnnnn");
	}
	return 0;
}
