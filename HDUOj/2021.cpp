#include<cstdio>
int main(){
	int temp[]={100,50,10,5,2,1};
	int ans=0,i=0,num=0,n;
	int money;
	while(scanf("%d",&n),n){
		for(int j=0;j<n;j++){
			scanf("%d",&money);
			while(num<money){
				if((num+temp[i])>money){
					i++;
				}
				else if((num+temp[i])==money){
					ans++;
					break;
				}
				else{
					ans++;
					num+=temp[i];
				}
			}
			i=0;	
			num=0;
		}
		printf("%d\n",ans);
		ans=0;
	}
	return 0;
}
