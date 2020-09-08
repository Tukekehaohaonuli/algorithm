#include<cstdio>
int main(){
	int c;
	scanf("%d",&c);
	while(c--){
		int n;
		int a,b,c;
		int ans=0;
		scanf("%d",&n);
		a=n/2;
		b=2*(n-a)/3;
		c=n-a-b;
		ans=a/11+b/11+2;
		if(c>0){
			ans+=c/11+1;
		}
		printf("%d\n",ans);
	}
	return 0;
}
