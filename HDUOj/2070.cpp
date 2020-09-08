#include<cstdio>
int main(){
	__int64 t[51];
	t[0]=0;t[1]=1;
	int n;
	while(scanf("%d",&n),n!=-1){
		for(int i=2;i<=n;i++){
			t[i]=t[i-1]+t[i-2];
		}
		printf("%I64d\n",t[n]);
	}
	return 0;
} 
