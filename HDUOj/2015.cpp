#include<cstdio>
int main(){
	int n,m,num=0;
	int ans=0;
	while(scanf("%d%d",&n,&m)!=EOF){
		for(int i=1;i<=n;i++){
			ans+=2*i;
			num++;
			if(num==m){
				printf("%d ",ans/m);
				num=0;
				ans=0;
			}
		}
		if(ans!=0)
		printf("%d \n",ans/num);
		else
		printf(" \n");
		ans=0;num=0;
	}
	return 0;
}
