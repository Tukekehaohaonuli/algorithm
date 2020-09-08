#include<cstdio>
int main(){
	int n;
	int old=1;
	int ans;
	while(scanf("%d",&n)!=EOF){
		for(int i=1;i<n;i++){
			ans=(old+1)*2;
			old=ans;
		}
		printf("%d\n",ans);
		old=1;
	}
	return 0;
} 
