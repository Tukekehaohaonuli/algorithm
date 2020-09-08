#include<cstdio>
void R(int n,int r){
	int a,b;
	a=n/r;
	b=n%r;
	if(a)
	R(a,r);
	printf("%c",b>=10?('A'+b-10):b+'0');
}
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(a<0)
		{	printf("-");
		a=-a;
	}
		R(a,b);
		printf("\n");
	}
	return 0;
}
