#include<cstdio>
const int maxn=22;
int d[maxn];
int n,r;
void dfs(int x,int num){
	if(x>n)
	return ;
	if(num==r){
		d[r]=x;
		for(int i=1;i<=r;i++){
			printf("%d%c",d[i],i==r?'\n':' ');
		}
	}
	d[num]=x;
	dfs(x+1,num+1);  
	dfs(x+1,num);
}
int main(){
	scanf("%d%d",&n,&r);
	dfs(1,1);
	return 0;
}
