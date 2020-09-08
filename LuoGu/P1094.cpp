#include<cstdio>
#include<algorithm>
using namespace std;
int bag[30001];
int main(){
	int w,n;
	scanf("%d%d",&w,&n);
	for(int i=0;i<n;i++)
	scanf("%d",bag+i);
	sort(bag,bag+n);
	int i=0,j=n-1;
	int ans=0;
	while(i<j){
		if(bag[i]+bag[j]<=w){
			ans++;i++;j--;
		}
		else{
			ans++;j--;
		}
	}
	if(i==j)
	ans++;
	printf("%d",ans);
	return 0;
}
