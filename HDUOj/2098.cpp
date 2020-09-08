#include<cstdio>
bool isValue(int n){
	for(int i=2;i<=n/2;i++)
	if(n%i==0)return false;
	return true;
}
int main(){
	int n;
	while(scanf("%d",&n),n){
		int ans=0;
		for(int i=2;i<n/2;i++){
			if(isValue(i)&&isValue(n-i))
			ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}
