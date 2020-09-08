#include<cstdio>
int temp[500001];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",temp+i);
	int ans=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(temp[i]>temp[j])
			ans++;
		}
	}
	printf("%d",ans);
	return 0;
}
