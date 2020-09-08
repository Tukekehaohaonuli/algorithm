#include<cstdio>
int main(){
	
	int m;
	scanf("%d",&m);
	while(m--){
		int n;
		double ans=0;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			if(i&1){
				ans+=1.0/i;
			}
			else
			ans-=1.0/i;
		}
		printf("%.2f\n",ans);
	}
	return 0;
} 
