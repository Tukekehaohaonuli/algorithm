#include<cstdio>
int main(){
	int n;
	scanf("%d",&n);
	if(n<0)
{	printf("-");
	n=-n;}
	int x=0;
	while(n>0){
		x=x*10+n%10;
		n/=10;
	}
	printf("%d",x);
	return 0;
}
