#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int ans=0;
	int temp[10001];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",temp+i);
	int k=0; 
	sort(temp+k,temp+n);
	while(k<n-1){
		ans+=temp[k]+temp[k+1];
		temp[k+1]+=temp[k];
		k++;
		sort(temp+k,temp+n);
	}
	printf("%d",ans);
	return 0;
}
