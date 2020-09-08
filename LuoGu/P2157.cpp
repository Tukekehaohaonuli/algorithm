#include"¿ìËÙÃİÄ£°å.cpp"
#include<cstdio>
node ans;
int main(){
	int n,m;
	int q,w;
	while(scanf("%d%d",&n,m)&&(n+m)){
		int a,b;
		for(int i=0;i<m;i++){
			scanf("%d%d",&a,&b);
			x.mat[a][b]=1;
		}
		int t;
		int k;
		scanf("%d",&t);
		for(int i=0;i<t;i++){
			scanf("%d%d%d",&q,&w,&k);
			ans=matpow(ans,x,k);
			printf("%d\n",ans.mat[q][w]);
		}
	}
	return 0;
}
