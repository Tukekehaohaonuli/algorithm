#include<cstdio>
const int maxn =30;
int n,V,maxValue;
int w[maxn],c[maxn];
void dfs(int index,int sumW,int sumC){
	if(index==n){
		if(sumW<=V&&sumC>maxValue){
			maxValue=sumC;
		}
		return ;
	}
	dfs(index+1,sumW,sumC);
	dfs(index+1,sumW+w[index],sumC+c[index]);
}
int main(){
	scanf("%d%d",&n,&V);
	for(int i=0;i<n;i++){
		scanf("%d",w+i);
	}
	for(int i=0;i<n;i++){
		scanf("%d",c+i);
	}
	dfs(0,0,0);
	printf("%d",maxValue);
	return 0;
}
