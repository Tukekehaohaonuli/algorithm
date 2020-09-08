#include<cstdio>
int main(){
	char temp[1001];
	int n;
	scanf("%d",&n);
	while(n--){
		int i=0;
		int ans=0;
		scanf("%*c");
		while(scanf("%c",temp+i),temp[i]!='\n'){
			if(temp[i]>='0'&&temp[i]<='9')
			ans++;
			i++;
		}
		printf("%d\n",ans);
	}
	return 0;
}
