#include<cstdio>
int main(){
	int ans[21]={0,1,2};
	for(int i=3;i<21;i++){
		ans[i]=ans[i-2]+ans[i-1];
	}	
	int n;
	while(scanf("%d",&n)!=EOF){
		printf("%d\n",ans[n]);
	}
	return 0;
}
