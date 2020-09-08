#include<cstdio>
int temp[100];
int main(){
	int n;
	scanf("%d",&n);
	int num=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",temp+i);
		num+=temp[i];
	}
	num=num/n;
	int ans=0;
	for(int i=0;i<n;i++){
		temp[i]-=num;
	}
	for(int i=0;i<n-1;i++){
		if(temp[i]){
			temp[i+1]+=temp[i];
			ans++;
		}
	}
	printf("%d",ans);
	return 0;
}
