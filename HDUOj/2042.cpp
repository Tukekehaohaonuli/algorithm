#include<cstdio>
int main(){
	int n;
	scanf("%d",&n);
	int day;
	while(n--){
		scanf("%d",&day);
		int ans=0,old=3;
		for(int i=0;i<day;i++){
			ans=(old-1)*2;
			old=ans;
		}
		printf("%d\n",ans);
	}
	return 0;
}
