#include<cstdio>
char name[100001][11];
int next[100001];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	scanf("%d%s",next+i,&name[i]);
	int a,b;
	int ans=0;
	for(int i=0;i<m;i++){
		scanf("%d%d",&a,&b);
		if(a==0&&next[ans]==0||a==1&&next[ans]==1)
		ans=(ans-b+n)%n;
		else
		ans=(ans+b)%n;
	}
	puts(name[ans]);
	return 0;
}
