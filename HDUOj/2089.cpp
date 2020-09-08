#include<cstdio>
bool is_prime(int n){
//	int z=n;
	int a;
	while(n>0){
		a=n%10;
		n/=10;
		if(a==4)
		return false;
		if(a==2){
			a=n%10;
			n/=10;
		//	printf("%d*****",a);
			if(a==4)
			return false; 
			if(a==6){
			//	printf("%d",a);
			return false;
		}
		}
	}
//	printf("%d***********\n",z);
	return true;
}
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m),n||m){
		int ans=0;
		for(int i=n;i<=m;i++){
			ans+=is_prime(i);
			//printf("%d***********\n",i);
		}
		//is_prime(62);
		printf("%d\n",ans);
	}
	return 0;
}
