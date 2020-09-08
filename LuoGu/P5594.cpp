#include<iostream>
#define f(i,j,n) for(int i=j;i<=n;i++)
int temp[1001][1001];
int main(){
	using namespace std;
	int n,m,k;
	cin >>n>>m>>k;

	f(i,1,n)
		f(j,1,m)
		cin>>temp[i][j];
	int ans[1001]={0};
	f(i,1,m){
		int mid[1001]={0};
		f(j,1,n){
			mid[temp[j][i]]++;
		}
		f(j,1,k){
			if(mid[j]!=0)
			ans[j]++;
		}
	}
	f(i,1,k){
		cout<<ans[i] <<' ';
	}
	return 0;
} 
