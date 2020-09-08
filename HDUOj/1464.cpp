#include<cstdio>
long long int w(long long int a,long long int b,long long int c){
	if(a<0||b<0||c<0)
	return 1;
	else if(a>20||b>20||c>20)
	return w(20,20,20);
	else return (w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1));
}
int main(){
	long long int a,b,c;
	while(scanf("%lld%lld%lld",a,b,c),a!=-1&&b!=-1&&c!=-1){
		printf("w(%lld,%lld,%lld)=",a,b,c);
		long long int ans=w(a,b,c);
		printf("%lld\n",ans);
	}
	return 0;
}
