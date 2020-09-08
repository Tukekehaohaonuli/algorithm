#include<cstdio>
const int maxn=151;
int sup[maxn];
int temp[maxn];
int c;
int prime[maxn];
int num;
bool isprime[maxn];
void isPrime(){
	for(int i=2;i<maxn;i++){
		for(int j=i+i;j<maxn;j=j+i){
			isprime[j]=true;
		}
	}
	for(int i=2;i<maxn;i++){
		if(isprime[i]==false){
			prime[num++]=i;
		}
	}
}
int main(){
	scanf("%d",&c);
	isPrime();
	sup[0]=1;
		for(int i=2;i<maxn;i++){
			if(isprime[i]==false){
				for(int j=0;j<maxn;j++){
					for(int k=0;k*i+j<maxn;k++){
						temp[k*i+j]+=sup[j];
					}
				}
				for(int j=0;j<maxn;j++){
				sup[j]=temp[j];
				temp[j]=0;
			}
			}
			
		}
	while(c--){
		int n;
		scanf("%d",&n);
		printf("%d\n",sup[n]);
	} 
	return 0;
}
