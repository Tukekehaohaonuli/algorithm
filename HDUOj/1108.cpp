#include<cstdio>
int gcd(int a,int b){
	if(a%b){
		gcd(b,a%b);
	}
	else{
		return b;
	}
}
int acd(int a,int b){
	return a*b/gcd(a,b);
} 
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){
		printf("%d\n",acd(a,b));
	}
	return 0;
}
