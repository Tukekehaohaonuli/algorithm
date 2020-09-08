#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=10001;
int max1;
int t[maxn];
int main(){
	char c;
	int k=1;
	while(scanf("%c",&c),c!=']'){
		if(c>='0'&&c<='9'){
			t[k++]=c-'0';
		}
	}
	for(int i=1;i<k-1;i++){
		for(int j=i+1;j<k;j++){
			int temp=min(t[i],t[j])*(j-i);
			if(temp>max1){
				max1=temp;
			}
		}
	}
	printf("%d",max1);
	return 0;
}
