#include<cstdio>
int main(){
	int n;
	char temp[1000];
	scanf("%d%*c",&n);
	while(n--){
		int ans=0;
		gets(temp);
		for(int i=0;temp[i];i++){
			if(temp[i]<0)
			ans++;
		}
		printf("%d\n",ans/2);
	}
	return 0;
}
