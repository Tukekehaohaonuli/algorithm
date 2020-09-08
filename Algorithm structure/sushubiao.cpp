#include<cstdio>
const int maxn=101;
int isprime[maxn],pNum;
bool p[maxn];   //0表示是素数 
void isPrime(int n){
	for(int i=2;i<=n;i++){
		for(int j=i+i;j<=n;j=j+i){
			p[j]=true;
		}
	}
	for(int i=2;i<=n;i++){
		if(p[i]==false){
			isprime[pNum++]=i;
		}
	}
} 
int main(){
	isPrime(100);
	for(int i=0;i<pNum;i++){
		printf("%d ",isprime[i]);
	}
	return 0;
}
