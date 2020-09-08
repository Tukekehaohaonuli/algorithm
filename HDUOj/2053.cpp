#include<cstdio>
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int temp[100001]={0};
		for(int i=1;i<=n;i++){
			for(int j=1;j<100001;j++){
				if(j%i==0){
					temp[j]?temp[j]=0:temp[j]=1;
				}
			}
		}
		printf("%d\n",temp[n]);
		
		
	}
	return 0;
}
