#include<cstdio>
int gcd(int a,int b){
	if(a%b==0){
		return b;
	}
	else{
		gcd(b,a%b);
	}
}
int bcd(int a,int b){
	return a*b/gcd(a,b);
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	printf("%d",bcd(n,m));
	return 0;
} 
