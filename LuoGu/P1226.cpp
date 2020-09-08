#include<cstdio>
int k;
int f(int a,int b){
	int ans=1;
	while(b){
		if(b&1) {
			a=a%k;
			ans*=a;
			ans=ans%k;
		}
		a=a%k;
		a*=a;
		a=a%k;
		b>>=1; 
	}
	return ans;
}
int main(){
	int b,p;
	scanf("%d%d%d",&b,&p,&k);
	int ans=f(b,p);
	printf("%d^%d mod %d=%d",b,p,k,ans%k);
	return 0;
}

