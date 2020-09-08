#include<cstdio>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		if(a%b==0)printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
