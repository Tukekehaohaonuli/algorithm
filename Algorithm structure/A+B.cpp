#include<cstdio>
void f(int n,int r){
	if(n/r){
		f(n/r,r);
	}
	printf("%d",n%r);
}
int main(){
	int m,a,b;
	while(scanf("%d",&m),m){
		scanf("%d%d",&a,&b);
		int sum=a+b;
		f(sum,m);
		printf("\n");
	}
	return 0;
} 
