#include<cstdio>
int main(){
	int n;
	while(scanf("%d",&n),n){
		double ans=n;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i<j){
					ans+=i*2.0/j;
				}
			}
		}
		printf("%.2f\n",ans);
	}
	return 0;
} 
