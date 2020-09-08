#include<cstdio>
int ans[20001];
int temp[10001];
int main(){
	int n;
	scanf("%d",&n);
	int s[101];
	for(int i=0;i<n;i++){
		scanf("%d",s+i);
		temp[s[i]]=1;
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			ans[s[i]+s[j]]=1;
			temp[s[i]]=1;
			temp[s[j]]=1;
		}
	}
	int res=0;
	for(int i=0;i<10001;i++){
		if(temp[i]&&ans[i])
		res++;
	}
	printf("%d",res);
	return 0;
}
