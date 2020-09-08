#include<cstdio>
int ged(int a,int b){
	if(a%b){
		ged(b,a%b);
	}
	else return b;
}
int gud(int a,int b){
	return a*b/ged(a,b);
}
int main(){
	int n;
	int temp;
	while(scanf("%d",&n),n){
		int ans=1;
		for(int i=0;i<n;i++){
			scanf("%d",&temp);
			ans=gud(ans,temp);
		}
		printf("%d\n",ans);
	}
	return 0;
}
