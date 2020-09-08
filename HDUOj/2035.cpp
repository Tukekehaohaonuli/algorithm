#include<cstdio>
int f(int a,int b){
	int ans=1;
	while(b){
		if(b&1)ans*=a;
		a*=a;
		ans%=1000;
		a%=1000;
		b>>=1; 
	}
	return ans;
}
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b),a||b){
		printf("%d\n",f(a,b));
	}
	return 0;
}
