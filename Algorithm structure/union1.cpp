#include<cstdio>
const int N= 101;
int father[N];
int visited[N];
int m,n;
void init(){
	for(int i=1;i<=n;i++)
	father[i]=i;
}
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

int main(){
	scanf("%d%d",&n,&m);
	init();
	int a,b;
	for(int i=0;i<m;i++){
		scanf("%d%d",&a,&b);
		Union(a,b);
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		visited[findFather(i)]=1;
	}
	for(int i=1;i<=n;i++)
	ans+=visited[i];
	printf("%d",ans);
	return 0;
}
