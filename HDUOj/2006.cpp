#include<cstdio>
int main(){
	int n,temp;
	int ans=1;
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++){
		scanf("%d",&temp);
		if(temp%2==1){
			ans*=temp;
		}
		}
		printf("%d\n",ans);
		ans=1;
	}
	
	return 0;
}
