#include<cstdio>
int f(int n,int r){
	int ans=0;
	while(n){
		ans+=n%r;
		n/=r;
	}
	return ans;
}
int main(){
	int n;
	while(scanf("%d",&n),n){
		if(f(n,10)==f(n,16)&&f(n,10)==f(n,12))
		printf("%d is a Sky Number.\n",n);
		else
		printf("%d is not a Sky Number.\n",n);
	}
	return 0;
}
