#include<cstdio>
int main(){
	int a,b;
	while(scanf("%x%x",&a,&b)!=EOF){
		printf(a+b<0?"-%X\n":"%X\n",a+b<0?-a-b:a+b);
	}
	return 0;
}
