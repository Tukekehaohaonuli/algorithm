#include<cstdio>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		long long int k;
		scanf("%lldd",&k);
		k=k%100000;
		k=k+6*100000;
		printf("%lld\n",k);
	}
	return 0;
}
