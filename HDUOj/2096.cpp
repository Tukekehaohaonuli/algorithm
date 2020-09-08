#include<cstdio>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int a,b;
		scanf("%d%d",&a,&b);
		int ans=(a%100+b%100)%100;
		printf("%d\n",ans);
	}
	return 0;
} 
