#include<cstdio>
const int maxn=101;
int father[maxn];
bool isvalue[maxn];
int findFather(int x){
	 int a=x;
	 while(father[x]!=x){
	 	x=father[x];
	 }
	 while(father[a]!=a){
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
void init_father(int n){
	for(int i=1;i<=n;i++){
		father[i]=i;
	}
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	init_father(n);
	int a,b;
	for(int i=0;i<m;i++){
		scanf("%d%d",&a,&b);
		Union(a,b);
	}
	for(int i=1;i<=n;i++){
		isvalue[father[i]]=1;
	}
	int num=0;
	for(int i=1;i<=n;i++){
		num+=isvalue[i];
	}
	printf("%d",num);
	return 0;
}
