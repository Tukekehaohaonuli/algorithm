#include<cstdio>
int temp[1001];
int f(int n){
	int ans=1;
	if(n>1){
		if(temp[n])
		return temp[n];
		for(int i=1;i<=n/2;i++){
			ans+=f(i);
		}
		return temp[n]=ans;
	}
	else{
		return temp[1]=ans;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int ans=f(n);
	printf("%d",ans);
}
