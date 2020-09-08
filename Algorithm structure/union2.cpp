#include<cstdio>
const int maxn=101;
int father[maxn];
int visited[maxn];
int n,m;
int findFather(int x){
	int a=x;
	while(x!=father[x]){
		x=father[x];
	}
	while(a!=father[a]){
		int z=a;
		a=father[a];
		father[z]=x;
	}
	return x;
}
void Union(int a,int b){
	int faA=findFather(a);
	int faB=findFather(b);
	if(faA!=faB){
		father[faA]=faB;
	}
}
void init_father(){
	for(int i=0;i<n;i++){
		father[i]=i;
	}
}
int main(){
	scanf("%d%d",&n,&m);
	int a,b;
	init_father();
	for(int i=0;i<m;i++){
		scanf("%d%d",&a,&b);
		Union(a,b);
	}
	for(int i=0;i<n;i++){
		visited[findFather(i)]=1;
	}
	int ans=0;
	for(int i=0;i<n;i++){
		ans+=visited[i];
	}
	printf("%d\n",ans);
	return 0;
}
