#include<cstdio>
int main(){
	int ans[41]={0,0,1,2};
	for(int i=4;i<41;i++)
	ans[i]=ans[i-1]+ans[i-2];
	int n;
	scanf("%d",&n);
	while(n--){
		int a;
		scanf("%d",&a);
		printf("%d\n",ans[a]);
	}
	return 0;
}
