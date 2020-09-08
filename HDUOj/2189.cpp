#include<cstdio>
int ans,cnt;
const int maxn=151;
int prime[maxn];
int c,n;
int sup[maxn],temp[maxn];
bool isprime[maxn];  //false-是素数 true-不是素数 
void getPrime(){
	isprime[0]=isprime[1]=true;
	for(int i=2;i<151;i++){
		for(int j=i+i;j<151;j=j+i){
			isprime[j]=true;
		}
	}
	for(int i=2;i<151;i++){
		if(isprime[i]==false){
			prime[cnt++]=i;
		}
	}
}
//void f(int num,int dept){
//	if(dept>=cnt||num+=prime[dept]>n){
//		return ;
//	}
//	if(num+=prime[i]==n){
//		ans++;
//		return ;
//	}
//}
int main(){
	getPrime();
	scanf("%d",&c);
	for(int i=0;i<maxn;i=i+2){
		sup[i]=0;
	}
	sup[0]=1;
	for(int i=2;i<maxn;i++){
		if(isprime[i]==false){
			for(int j=0;j<maxn;j++){
				for(int k=0;k+j<maxn;k+=i){
					temp[k+j]+=sup[j];
				}
			}
			for(int j=0;j<maxn;j++){
				sup[j]=temp[j];
				temp[j]=0;
			}
		}
	}
	while(c--){
		scanf("%d",&n);
		printf("%d\n",sup[n]);
	}
	return 0;
}
