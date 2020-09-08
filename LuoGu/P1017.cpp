#include<cstdio>
void f(int n,int r){
	if(n>0){
	int a,b;
	a=n%r;
	b=n/r;
	f(b,r);
	printf("%c",a>=10?a-10+'A':a+'0');
}
} 
int main(){
	int n,r;
	scanf("%d%d",&n,&r);
		printf("%d=",n);
		if(n>0)
		f(n,-r);
		else
		f(-n,-r);
		printf("(base%d)",r);
		return 0;
}
