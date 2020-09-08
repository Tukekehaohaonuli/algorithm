#include<cstdio>
void value(int n){
	if(n){
	value(n/2);
	printf("%d",n%2);
}
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		value(n);
		printf("\n");
	}
	return 0;
}
