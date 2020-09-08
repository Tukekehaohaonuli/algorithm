#include<cstdio>
const int maxn=15;
int queen[maxn];
int n;
int num;
bool isvalue(int x,int y){
	for(int i=1;i<x;i++){
	//	if(queen[i]!=0&&x==i)return false; //kequ ?
		if(queen[i]==y)return false;
		if((x-i)==(y-queen[i]))return false;
		if((x+y)==(i+queen[i]))return false;
	}
	return true;
}
void dfs(int x){  //x -ÐÐ
	if(x==n+1){
		for(int i=1;i<=n;i++){
			printf("%d%c",queen[i],i==n?'\n':' ');
			
		}
		num++;
		return ;
	}
	for(int i=1;i<=n;i++){
		if(isvalue(x,i)){
			queen[x]=i;
	//		printf("%d  %d********\n",i,x);
			dfs(x+1);
		}
	}
	queen[x-1]=-1;
} 
int main(){
	for(int i=1;i<=n;i++)
	queen[i]=-1;
	scanf("%d",&n);
	dfs(1);
//	printf("%d*****",num);
	return 0;
}
