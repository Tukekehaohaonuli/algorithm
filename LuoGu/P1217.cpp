#include<cstdio>
#include<cmath>
const int maxn=100000005;
int prime[maxn],pNum;   //0表示是素数 
bool p[maxn]={0};
	int a,b;
//bool is_Prime(int n){
//	int sqr=sqrt(1.0*n);
//	if(n==1)
//	return true;
//	for(int i=2;i<=sqr;i++){
//		if(n%i==0)
//		return false;
//	}
////	printf("%d***********\n",n);
//	return true;
//}
void Fine_Prime(){
	for(int i=2;i<=b;i++){
		if(prime[i]==0){
			for(int j=i+i;j<=b;j=j+i){
				prime[j]=1;
			}
		}
	}
} 
//bool is_prime(int n){
//	for(int i=0;i<pNum;i++){
//		if(n==prime[i])
//		return true;
//	}
//	return false;
//}
bool is_Me(int n){
	int s=0;
	int x=n;
	while(n>=1){
		s=s*10+n%10;
		n/=10;
	}
//	printf("%d----------\n",x);
	if(s==x)
	return true;
	else
	return false;
}
int main(){

	scanf("%d%d",&a,&b);
	Fine_Prime();
	for(int i=a;i<=b;i++){
		if(prime[i]==0&&is_Me(i))
		printf("%d\n",i);
	}
	return 0;
}
