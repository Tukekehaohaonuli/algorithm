#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
struct nodes{
	int x;
	int y;
}node[16];
int visited[16];
double ans=1231234424.0;
int n;	
double dis(int x1,int y1,int x2,int y2){
	return sqrt((x1-x2)*(x1-x2)*1.0+(y1-y2)*(y1-y2)*1.0);
}
void dfs(int dept,int now,double length){
	if(ans<length)return ;
	if(dept==n){
		ans=min(ans,length);
		return ;
	}
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			visited[i]=1;
			dfs(dept+1,i,length+dis(node[now].x,node[now].y,node[i].x,node[i].y));
			visited[i]=0;
		}
	}
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	scanf("%d%d",&node[i].x,&node[i].y);
	node[0].x=0;node[0].y=0;
	dfs(0,0,0.0);
	printf("%.2f",ans);
	return 0;
} 
