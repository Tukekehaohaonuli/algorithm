#include<cstdio>
int main(){
	int temp[100]={0};
	int m,n,value=0,c;
	int i,j,ans=0,k;
	scanf("%d%d",&m,&n);
	for(i=0;i<n;i++){
		scanf("%d",&c);
		for(j=0;j<m;j++){
			if(temp[j]==c){
				break;
			}
		}
		if(j==m){
			ans++;
			temp[value++%m]=c;
		}
	}
	printf("%d",ans);
	return 0;
}
