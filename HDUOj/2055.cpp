#include<cstdio>
int main(){
	int n;
	scanf("%d%*c",&n);
	while(n--){
		char c;
		int a;
		scanf("%c%d%*c",&c,&a);
		printf("%d\n",c>='a'?-((int)(c-'a')+1)+a:((int)(c-'A')+a+1));
	} 
	return 0;
}
