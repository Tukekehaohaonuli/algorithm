#include<cstdio>
#include<cmath>
bool isPrime(int n){
	int a=sqrt(n);
	if(n==0||n==1){
		return false;
	}
	for(int i=2;i<=a;i++){
		if(n%i==0)return false;
	}
	return true;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i<n;i++){
		for(int j=i;j<n-2;j++){
			if(isPrime(i)&&isPrime(j)&&isPrime(n-i-j))
			{printf("%d %d %d",i,j,n-i-j);
				return 0;
			}
		}
	}
	return 0;
}
