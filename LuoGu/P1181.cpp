#include<cstdio>
int temp[100001];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	scanf("%d",temp+i);
	int ans1=0,ans2=0;
	int nowweight=0;
	for(int i=0;i<n;i++){
		if(nowweight+temp[i]<=m){
			nowweight+=temp[i];
		}
		else{
			nowweight=temp[i];
			ans1++;
		}
	}
	if(nowweight>0)
	ans1++;
	nowweight=0;
	for(int i=n-1;i>=0;i--){
		if(nowweight+temp[i]<=m){
			nowweight+=temp[i];
		}
		else{
			nowweight=temp[i];
			ans2++;
		}
	}
	if(nowweight>0)
	ans2++;
	printf("%d",ans1<ans2?ans1:ans2);
	return 0;
}
