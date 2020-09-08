#include<cstdio>
int e[20001],w[20001],num[20001];
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)
	scanf("%d",e+i);
	for(int i=1;i<=n;i++)
	{	scanf("%d",w+i);
		num[i]=i;
	}		
	for(int i=0;i<k;i++){
		int max=0,maxi=0;
		for(int j=1;j<=n;j++){
			if(w[j]>max){
				max=w[j];
				maxi=j;
			}
		}
		w[maxi]=0;
		printf("%d ",maxi);
	}
	return 0;
}
