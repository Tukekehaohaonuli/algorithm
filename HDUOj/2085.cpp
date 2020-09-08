#include<cstdio>
int main(){
	int n;
	while(scanf("%d",&n),n!=-1){
		long long int olda=1,oldb=0;
		long long int newa,newb;
		for(int i=0;i<n;i++){
			newa=olda*3+oldb*2;
			newb=olda*1+oldb*1;
			olda=newa;
			oldb=newb;
		}
		printf("%lld,%lld\n",olda,oldb);
	}
	return 0;
}
